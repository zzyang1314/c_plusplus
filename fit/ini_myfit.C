#include "iostream"

using namespace std;

  //define a function with 3 parameters
  Double_t fitf(Double_t *x, Double_t *par){
	Double_t arg = 0;
	if(par[2] != 0) arg = (x[0] - par[1])/par[2];
	Double_t fitval = par[0] *TMath::Exp(-0.5*arg*arg);
	return fitval;
  }
  //this function used fitf to fit a histrogram
  void myfit(){
	TString dir = gROOT->GetTutorialDir();
	dir.Append("/hSimple.C");
	dir.ReplaceAll("/./","/");

	if (!gInterpreter->IsLoaded(dir.Data())) gInterpreter->LoadMacro(dir.Data());
	TFile *hsimpleFile = (TFile*)gROOT->ProcessLineFast("hsimple(1)");
	if (!hsimpleFile) return;
	/*
	//open a file and get a histogram
	TFile *f = new TFile("hsimple.root");
	*/
	TH1F *hpx = (TH1F*)f->Get("hpx");

	//create a TF1 object using the function defined above
	//The last three parameters specify the number of parameters for the function
	TF1 *func = new TF1("fit",fitf,-3,3,3);
	//Set the parameters to the mean and RMS of the histogram
	func->SetParameters(500,hpx->GetMean(),hpx->GetRMS);
	//Give the parameters meaningful names
	func->SetParNames("Constant","Mean_value","Sigma");

	//Call TH1::Fit with the name of the TF1 object
	hpx->Fit("fit");

  }

