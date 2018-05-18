//解引用 (*)

#include <iostream>
using namespace std;

class ptr{
  public:
	ptr(int *a){
	  pt = a;
	}

	int& operator*() const{
	  return *(pt);
	}

  private:
	int *pt;
};

int main(){

  int num2 = 2;
  int &num1 = num2;
  ptr p(&num1);
  *p = 4;
  cout << *(p) << endl;

}


