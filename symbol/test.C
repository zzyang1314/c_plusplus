#include <iostream>
using namespace std;

int main(){
  TFile *hfile = new TFile("Test.root","RECREATE");

  TH1F *a = new TH1F("a","a",100,-10,10);
  //TH1F *q;
  a->Fill(5);
  
  //char a = "hello";
  TH1F *p = new TH1F("p","p",100,-10,10);
  TH1F *q = new TH1F("q","q",100,-10,10);

  *p = &a;
  *q = &a;

  p->Fill(p);
  q->Fill(q);

  cout << "the address of a: " << &a << "\n";
  cout << "the address of p: " << &p << ", the value of p: " <<"\n";
  cout << "the address of q: " << &q << ", the value of q: "  << "\n";

  hfile->Write();
  hfile->Close();
  //return 0;

}
