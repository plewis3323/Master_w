#include <iostream>
#include <TCanvas.h>
#include <cmath>
#include <TF1.h>
#include <TROOT.h>

using namespace std; 


void plot_exp_decay() {
	// Create a canvas to draw the plot 
	TCanvas *c1 = new TCanvas("c1", "Exponential Decay Function", 800, 600);
	
	
	// Define the function exp(-x^2) 
	TF1 *func = new TF1("func", "exp(-x*x)", -5., 5.); 
	
	//Draw the function on the canvas 
	func ->Draw(); 
	
	//Save the plot as an image
	c1->SaveAs("exponential_decay.png");
	
   gROOT->SetStyle("Plain");   
   // set plain TStyle

   gStyle->SetOptStat(111111); 
   // draw statistics on plots,  // (0) for no output
  
   gStyle->SetOptFit(1111);    
   // draw fit results on plot,
   // (0) for no ouput

   gStyle->SetPalette(57);     // set color map
   gStyle->SetOptTitle(0);     // suppress title box
	
}


int main() {
	// Initialize the Root application
	TApplication theApp("App", 0, 0);
	
	// Call the function to plot the exponential decay
	plot_exp_decay();
	
	// Run the application
	theApp.Run();
	
	return 0;

}
	

