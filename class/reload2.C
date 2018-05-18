//---Mar 29 2018 yzz----
//C++操作符重载
/*
操作符重载用于重载或重新定义C++中可用的大多数操作符。 它用于对用户定义数据类型执行操作。
运算符重载的优点是对同一操作数执行不同的操作。

下面来看看看在C++中运算符重载的简单例子。 在本示例中，定义了void operator ++ ()运算符函数(在Test类内部)。
*/


#include <iostream>
using namespace std;

class Test{
  private:
	int num;
  public:
	Test():num(8){}

	void operator ++(){
	  num = num + 2;
	}

	void Print(){
	  cout << "The count is: " << num << "\n";
	}

};

int main(){
  Test tt;
  ++tt;//calling of a function "void operator ++()"
  tt.Print();

  return 0;
}
