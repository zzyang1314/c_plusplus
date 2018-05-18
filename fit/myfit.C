//Get in memory an histogram from a root file and fit a user defined function.
// Note that a user defined function must always be defined
// as in this example:
//  - first parameter: array of variables (in this example only 1-dimension)
//  - second parameter: array of parameters
// Note also that in case of user defined functions, one must set an initial value for each parameter.

 
//--------------------------

//define a function with 3 parameters
Double_t fitf(Double_t *x, Double_t *par){
  Double_t arg = 0;
  if(par[2] != 0) arg = (x[0] - par[1])/par[2];
  Double_t fitval = par[0] *TMath::Exp(-0.5*arg*arg);
  return fitval;
}
//this function used fitf to fit a histrogram
void myfit(){
  //open a file and get a histogram
  TFile *f = new TFile("basic_dis.root");
  TH1F *hpx = (TH1F *)f->Get("pro_Px_dis");

  //create a TF1 object using the function defined above
  //The last three parameters specify the number of parameters for the function
  TF1 *func = new TF1("fit",fitf,-3,3,3);
  //Set the parameters to the mean and RMS of the histogram
  func->SetParameters(500,hpx->GetMean(),hpx->GetRMS());
  //Give the parameters meaningful names
  func->SetParNames("Constant","Mean_value","Sigma");

  //Call TH1::Fit with the name of the TF1 object
  hpx->Fit(func,"r");

}

