#include <iostream>
#include <fstream>
#include <TFile.h>
#include <TH1F.h>
#include <TLatex.h>
#include <string>
#include <TGraphErrors.h>
#include <TGraph.h>
#include <TF1.h>
#include <TCanvas.h>
#include <TLegend.h>
#include <TString.h>
#include <vector>
#include <cmath>
using namespace std;

// Function to add a legend entry for each graph
void AddLegend(TLegend* legend, TGraph* graph, const char* legendText, Color_t color) {
    graph->SetLineColor(color);
    graph->SetMarkerColor(color);
    legend->AddEntry(graph, legendText, "lp");
}

void Mill_Mean_input() {
    const int n = 3;
    double stat_err1a[3] = {0.00597206, 0.00629597, 0.00474206};
    double stat_err1b[3] = {0.00384253, 0.00197715, 0.434154};
    double stat_err5a[3] = {0.00301874, 0.00400656, 0.0032146};
    double stat_err5b[3] = {0.00210688, 0.00184591, 0.0015304};
    double stat_err10a[3] = {0.00405335, 0.00458086, 0.00339226};
    double stat_err10b[3] = {0.00150586, 0.00148788, 0.00137583};
    double stat_err100a[3] = {0.00238462, 0.00187959, 0.00105203};
    double stat_err100b[3] = {0.000772954, 0.00167842, 0.00137789};

    double RMS_1a[3] = {0.0718 / 4, 0.06407 / 4, 0.1329 / 4};
    double RMS_1b[3] = {0.1965 / 4, 0.1839 / 4, 0.2059 / 4};
    double RMS_5a[3] = {0.03785 / 4, 0.04866 / 4, 0.04745 / 4};
    double RMS_5b[3] = {0.08232 / 4, 0.05701 / 4, 0.05435 / 4};
    double RMS_10a[3] = {0.02717 / 4, 0.02797 / 4, 0.02509 / 4};
    double RMS_10b[3] = {0.05442 / 4, 0.02522 / 4, 0.05997 / 4};
    double RMS_100a[3] = {0.004226 / 4, 0.01009 / 4, 0.008832 / 4};
    double RMS_100b[3] = {0.02758 / 4, 0.01758 / 4, 0.02328 / 4};

    TGraph* graphs[8];
    graphs[0] = new TGraph(n, stat_err1a, RMS_1a);
    graphs[1] = new TGraph(n, stat_err1b, RMS_1b);
    graphs[2] = new TGraph(n, stat_err5a, RMS_5a);
    graphs[3] = new TGraph(n, stat_err5b, RMS_5b);
    graphs[4] = new TGraph(n, stat_err10a, RMS_10a);
    graphs[5] = new TGraph(n, stat_err10b, RMS_10b);
    graphs[6] = new TGraph(n, stat_err100a, RMS_100a);
    graphs[7] = new TGraph(n, stat_err100b, RMS_100b);

    Color_t colors[8] = {kRed, kBlue, kGreen, kMagenta, kCyan, kOrange, kYellow, kViolet};

    // Create canvas for all graphs
    TCanvas* canvas = new TCanvas("AllGraphs", "Multiple Graphs Stacked with Fixed Ranges", 1200, 800);
    TLegend* legend = new TLegend(0.6, 0.7, 0.9, 0.9);
    legend->SetTextSize(0.025);

    const char* energyRanges[8] = {
        "1M Events (0.5-1.2 GeV)", "1M Events (1.4-3.0 GeV)",
        "5M Events (0.5-1.2 GeV)", "5M Events (1.4-3.0 GeV)",
        "10M Events (0.5-1.2 GeV)", "10M Events (1.4-3.0 GeV)",
        "100M Events (0.5-1.2 GeV)", "100M Events (1.4-3.0 GeV)"
    };

    for (int i = 0; i < 8; i++) {
        graphs[i]->SetMarkerStyle(21);
        graphs[i]->SetMarkerSize(1);
        graphs[i]->SetLineWidth(2);
        graphs[i]->SetLineColor(colors[i]);
        graphs[i]->SetMarkerColor(colors[i]);

        if (i == 0) {
            graphs[i]->Draw("AP");
            graphs[i]->GetXaxis()->SetTitle("Statistical Error");
            graphs[i]->GetYaxis()->SetTitle("RMS");
            graphs[i]->GetXaxis()->SetLimits(-1.07, 0.07);  // Fixed x-axis range
            graphs[i]->SetMinimum(-0.1);             // Fixed y-axis range
            graphs[i]->SetMaximum(0.1);
        } else {
            graphs[i]->Draw("P SAME");
        }

        // Add legend entry
        legend->AddEntry(graphs[i], energyRanges[i], "lp");

        // Add linear fit
        TF1* linearFit = new TF1("linearFit", "[0]*x + [1]", -1, 1);
        graphs[i]->Fit(linearFit, "Q");
        linearFit->SetLineColor(colors[i]);
        linearFit->Draw("SAME");

        // Print fit parameters
        double slope = linearFit->GetParameter(0);
        double intercept = linearFit->GetParameter(1);
        cout << "Graph " << i + 1 << ": " << energyRanges[i] << endl;
        cout << "  Slope: " << slope << " Intercept: " << intercept << endl;
    }

    legend->Draw();
    canvas->Update();
    canvas->SaveAs("l3_RMS_vs_staterr_stacked_fixed_ranges.root");
}

void Run1() {
    Mill_Mean_input();
}













