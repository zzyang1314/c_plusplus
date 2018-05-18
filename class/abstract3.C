#include <iostream>
using namespace std;

class Sum{
  private:
	int x,y,z;
  public:
	void add(){

	  cout <<"Enter two numbers: \n";
	  cin >> x >> y;
	  z = x + y;
	  cout << "Sum of the two number is: " << z <<"\n";
	}

};

int main(){
  Sum sum;
  sum.add();

  return 0;

}
