//---yzz Mar/21/2018------
void fit1(){
  /*
  //The first way to create a TF1 object with a formula, here we call the TF1 constructor by giving it the formula: sin(x)/x
  TF1 *f1 = new TF1("f1","sin(x)/x",0,10);
  f1->Draw();
   */


  //The second way to construct a TF1 is to add parameters to the expression. Here we use two parameters
  TF1 * f1 = new TF1("f1","[0]*x*sin([1]*x)",-3,3);
  //TF1 * f1 = new TF1("f1","10*x*sin(5*x)",-3,3);

  // The parameter index is enclosed in square brackets. The two parameters are: 
  //x is a pointer to the dimension array. Each element contains a dimension. For a 1D histogram only x[0] is used, for a 2D histogram x[0] and x[1] is used. 
  //par is a pointer to the parameters array. This array contains the current values of parameters when it is called by the fitting function.
  //To set the initial parameters explicitly you can use the following expression
  f1->SetParameters(0,10);//This sets parameter 0 to 10,把第1个参数设为10
  f1->SetParameters(1,5);//This sets parameter 1 to 5,把第2个参数设为5

  //You can also use SetParameters to set multiple parameters at once
  //f1->SetParameters(10,5);//This sets parameter 0 to 10 and parameter 1 to 5同时把第一个参数设为10，第二个参数设为5
  f1->Draw();

}
