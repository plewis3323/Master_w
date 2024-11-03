#include <TH1.h>
#include <TGraph.h>
#include <TFile.h>
#include <iostream>
#include <cmath>
#include <string>
#include <TGraphErrors.h>
#include <TF1.h>
#include <TRandom.h>
#include <TFitResultPtr.h>
#include <TMatrixDSym.h>
#include <TCanvas.h>
#include <iostream>
#include <string>
#include <vector> 

using namespace std;

TH1F* fitf_master = 0;
TGraph* grff = 0;

Double_t fitf(Double_t* x, Double_t* par)
{
    return par[0] * grff->Eval(x[0] * par[1]);
}



void testslope(int stats, double shift_factor, string f_1, string f_2, double startR, double EndR, TCanvas* histCanvas, TCanvas* tallyCanvas)
{
    string f_e = ".root";
    int offset = 5;

    TFile* file = TFile::Open("l3all_oe.root");
    if (!file || file->IsZombie()) {
        cout << "Failed to open the file!" << endl;
        return;
    }
    TH1F* histo = (TH1F*)file->Get("hcalout_eta_24"); 
    if (!histo) {
        cout << "Failed to get the histogram!" << endl;
        return;
    }

    int originalBins = histo->GetNbinsX();
    int targetBins = 100000;
    int rebinFactor = originalBins / targetBins;
    histo->Rebin(rebinFactor);

    fitf_master = (TH1F*)histo->Clone("fmaster");
    fitf_master->Smooth(2);
    grff = new TGraph(fitf_master);

    TH1F* htally = new TH1F("htally", "", 2000, 0.0, 0.5);
    int nhistobins = 400;

    histCanvas->cd();

    // Vector to store calculated C_rel values and uncertainties
    vector<double> C_rel_values;
    vector<double> C_rel_uncertainties;

    for (int k = 0; k < 16; k++) {
        
        gRandom->SetSeed(9939 + offset + k);
        TH1F* h1 = new TH1F("h1", "", nhistobins, 0, 10);

        for (int i = 0; i < stats; i++) {
            h1->Fill(histo->GetRandom());
        }

        fitf_master = (TH1F*)h1->Clone("fmaster");
        fitf_master->Smooth(2);

        grff = new TGraph(fitf_master);

        TH1F* h2 = new TH1F("h2", "", nhistobins, 0, 10);
        gRandom->SetSeed(9939 + k);

        for (int j = 0; j < stats / 7; j++) {
            h2->Fill(histo->GetRandom() * shift_factor);
        }

        float startFit = 0.5;
        float endFit = 1.3;

        int binsf = h1->FindBin(startFit);
        int binef = h1->FindBin(endFit);

        float amprat = h1->GetBinContent(binsf) / h2->GetBinContent(binsf);

        TF1* myexpo = new TF1("myexpo", fitf, 0.1, 10, 2);
        myexpo->SetParameters(1e4, 1.0);
        TFitResultPtr fitResult1 = h1->Fit("myexpo", "S", "", startR, EndR);
        TFitResultPtr fitResult2 = h2->Fit("myexpo", "S", "", startR, EndR);
        h1->SetLineColor(2);
        h2->SetLineColor(3);
        h1->Draw("same");
        h2->Draw("same"); 

  
        // Check if the fits were successful
        if (fitResult1.Get() && fitResult2.Get()) {
            double basep1 = fitResult1->Parameter(1);
            double shiftp1 = fitResult2->Parameter(1);

            double sigma_basep1 = fitResult1->ParError(1);
            double sigma_shiftp1 = fitResult2->ParError(1);

            // Calculate C_rel and its uncertainty for this iteration
            double C_rel = basep1 / shiftp1;
            double sigma_C_rel = C_rel * sqrt(
                pow(sigma_basep1 / basep1, 2) +
                pow(sigma_shiftp1 / shiftp1, 2)
            );

            // Store the calculated C_rel and uncertainty
            C_rel_values.push_back(C_rel);
            C_rel_uncertainties.push_back(sigma_C_rel);

            cout << "Iteration " << k << ": C_rel = " << C_rel << " ± " << sigma_C_rel << endl;

            htally->Fill(sigma_C_rel);  // Fill htally with each C_rel
        } else {
            cout << "Warning: Fit failed, skipping this iteration." << endl;
        }
    }
    

    
    tallyCanvas->cd();
    htally->Draw();
}


void mill () { 
 
    //Canvas for reference histograms 
    TCanvas *c1 = new TCanvas("c1");
    TCanvas *c2 = new TCanvas("c2");
    TCanvas *c3 = new TCanvas("c3");
    
    
     //Canvas for reference histograms 
    TCanvas *c4 = new TCanvas("c4");
    TCanvas *c5 = new TCanvas("c5");
    TCanvas *c6 = new TCanvas("c6");
    
    
    
    //canvas for tally histograms 
    TCanvas* c1a = new TCanvas("c2tally");
    TCanvas* c2a = new TCanvas("c2tally2");
    TCanvas* c3a = new TCanvas("c2tally3");
    
       //canvas for tally histograms 
    TCanvas* c4b = new TCanvas("c2tally4");
    TCanvas* c5b = new TCanvas("c2tally5");
    TCanvas* c6b = new TCanvas("c2tally6");
    
    
    
     testslope(1e6, 0.75, "Histo_Shape1", "U_Histo_tally1", 0.5, 1.2, c1, c1a);
     testslope(1e6, 1.0, "Histo_Shape1", "U_Histo_tally1", 0.5, 1.2, c2, c2a);
     testslope(1e6, 1.25, "Histo_Shape1", "U_Histo_tally1", 0.5, 1.2, c3, c3a);
     testslope(1e6, 0.75, "Histo_Shape1", "U_Histo_tally1", 1.4, 3.0, c4, c4b);
     testslope(1e6, 1.0, "Histo_Shape1", "U_Histo_tally1", 1.4, 3.0, c5, c5b);
     testslope(1e6, 1.25, "Histo_Shape1", "U_Histo_tally1", 1.4, 3.0, c6, c6b);
    
    
    TFile *Spectral_data = new TFile("Spectral_mill_events_Utally.root", "RECREATE"); 
    
      c1->Write(); 
     c2->Write();
     c3->Write(); 
     c4->Write(); 
     c5->Write(); 
     c6->Write(); 
     c1a->Write(); 
     c2a->Write(); 
     c3a->Write(); 
     c4b->Write(); 
    c5b->Write(); 
     c6b->Write(); 
     Spectral_data->Close(); 
     
}








void ten_mill () { 
 
    //Canvas for reference histograms 
    TCanvas *c1 = new TCanvas("c1");
    TCanvas *c2 = new TCanvas("c2");
    TCanvas *c3 = new TCanvas("c3");
    
    
     //Canvas for reference histograms 
    TCanvas *c4 = new TCanvas("c4");
    TCanvas *c5 = new TCanvas("c5");
    TCanvas *c6 = new TCanvas("c6");
    
    
    
    //canvas for tally histograms 
    TCanvas* c1a = new TCanvas("c2tally");
    TCanvas* c2a = new TCanvas("c2tally2");
    TCanvas* c3a = new TCanvas("c2tally3");
    
       //canvas for tally histograms 
    TCanvas* c4b = new TCanvas("c2tally4");
    TCanvas* c5b = new TCanvas("c2tally5");
    TCanvas* c6b = new TCanvas("c2tally6");
    
    
    
    testslope(1e7, 0.75, "Histo_Shape1", "Histo_tally1", 0.5, 1.2, c1, c1a);
    testslope(1e7, 1.0, "Histo_Shape1", "Histo_tally1", 0.5, 1.2, c2, c2a);
    testslope(1e7, 1.25, "Histo_Shape1", "Histo_tally1", 0.5, 1.2, c3, c3a);
    testslope(1e7, 0.75, "Histo_Shape1", "Histo_tally1", 1.4, 3.0, c4, c4b);
    testslope(1e7, 1.0, "Histo_Shape1", "Histo_tally1", 1.4, 3.0, c5, c5b);
    testslope(1e7, 1.25, "Histo_Shape1", "Histo_tally1", 1.4, 3.0, c6, c6b);
    
    
    TFile *Spectral_data2 = new TFile("Spectral_ten_mill_events.root", "RECREATE"); 
    
     c1->Write(); 
     c2->Write();
     c3->Write(); 
     c4->Write(); 
     c5->Write(); 
     c6->Write(); 
     c1a->Write(); 
     c2a->Write(); 
     c3a->Write(); 
     c4b->Write(); 
     c5b->Write(); 
     c6b->Write(); 
     
     
     Spectral_data2->Close(); 
     
}







void hun_mill_low () { 
 
    //Canvas for reference histograms 
    TCanvas *c1 = new TCanvas("c1");
    TCanvas *c2 = new TCanvas("c2");
    TCanvas *c3 = new TCanvas("c3");
      
    
    //canvas for tally histograms 
    TCanvas* c1a = new TCanvas("c2tally");
    TCanvas* c2a = new TCanvas("c2tally2");
    TCanvas* c3a = new TCanvas("c2tally3");
    
    
    
    testslope(1e8, 0.75, "Histo_Shape1", "Histo_tally1", 0.5, 1.2, c1, c1a);
    testslope(1e8, 1.0, "Histo_Shape1", "Histo_tally1", 0.5, 1.2, c2, c2a);
    testslope(1e8, 1.25, "Histo_Shape1", "Histo_tally1", 0.5, 1.2, c3, c3a);
    
    
    
   
    
    
    TFile *Spectral_data3 = new TFile("Spectral_mill_eventsL.root", "RECREATE"); 
    
     c1->Write(); 
     c2->Write();
     c3->Write(); 
     c1a->Write(); 
     c2a->Write(); 
     c3a->Write(); 
     
     
     Spectral_data3->Close(); 
     
}





void hun_mill_high() {



       //Canvas for reference histograms 
    TCanvas *c4 = new TCanvas("c4");
    TCanvas *c5 = new TCanvas("c5");
    TCanvas *c6 = new TCanvas("c6");

    
       //canvas for tally histograms 
    TCanvas* c4b = new TCanvas("c2tally4");
    TCanvas* c5b = new TCanvas("c2tally5");
    TCanvas* c6b = new TCanvas("c2tally6");
    
    
     
    testslope(1e8, 0.75, "Histo_Shape1", "Histo_tally1", 1.4, 3.0, c4, c4b);
    testslope(1e8, 1.0, "Histo_Shape1", "Histo_tally1", 1.4, 3.0, c5, c5b);
    testslope(1e8, 1.25, "Histo_Shape1", "Histo_tally1", 1.4, 3.0, c6, c6b);
    
    TFile *Spectral_data4 = new TFile("Spectral_mill_eventsH.root", "RECREATE"); 

    c4->Write(); 
    c5->Write(); 
    c6->Write(); 
    c4b->Write(); 
    c5b->Write(); 
    c6b->Write(); 

   Spectral_data4->Close();


}
    
    
    
    
    
    


void five_mill () { 
 
    //Canvas for reference histograms 
    TCanvas *c1 = new TCanvas("c1");
    TCanvas *c2 = new TCanvas("c2");
    TCanvas *c3 = new TCanvas("c3");
    
    
     //Canvas for reference histograms 
    TCanvas *c4 = new TCanvas("c4");
    TCanvas *c5 = new TCanvas("c5");
    TCanvas *c6 = new TCanvas("c6");
    
    
    
    //canvas for tally histograms 
    TCanvas* c1a = new TCanvas("c2tally");
    TCanvas* c2a = new TCanvas("c2tally2");
    TCanvas* c3a = new TCanvas("c2tally3");
    
       //canvas for tally histograms 
    TCanvas* c4b = new TCanvas("c2tally4");
    TCanvas* c5b = new TCanvas("c2tally5");
    TCanvas* c6b = new TCanvas("c2tally6");
    
    
    
    testslope(5e6, 0.75, "Histo_Shape1", "Histo_tally1", 0.5, 1.2, c1, c1a);
    testslope(5e6, 1.0, "Histo_Shape1", "Histo_tally1", 0.5, 1.2, c2, c2a);
    testslope(5e6, 1.25, "Histo_Shape1", "Histo_tally1", 0.5, 1.2, c3, c3a);
    testslope(5e6, 0.75, "Histo_Shape1", "Histo_tally1", 1.4, 3.0, c4, c4b);
    testslope(5e6, 1.0, "Histo_Shape1", "Histo_tally1", 1.4, 3.0, c5, c5b);
    testslope(5e6, 1.25, "Histo_Shape1", "Histo_tally1", 1.4, 3.0, c6, c6b);
    
    
    TFile *Spectral_dataA = new TFile("Spectral_five_mill_events.root", "RECREATE"); 
    
     c1->Write(); 
     c2->Write();
     c3->Write(); 
     c4->Write(); 
     c5->Write(); 
     c6->Write(); 
     c1a->Write(); 
     c2a->Write(); 
     c3a->Write(); 
     c4b->Write(); 
     c5b->Write(); 
     c6b->Write(); 
     
     
     Spectral_dataA->Close(); 
     
}
























