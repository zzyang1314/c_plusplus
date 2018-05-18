//---Mar 29 2018 yzz---
/*
C++虚函数是基类中的一个成员函数，您可以在派生类中重新定义它。 
它声明使用virtual关键字。
它用于告诉编译器对函数执行动态链接或后期绑定

在后期绑定函数调用在运行时被解决。 
因此，编译器在运行时确定对象的类型，然后绑定函数调用。
*/

#include <iostream>
using namespace std;

class A{
  public:
	virtual void display(){
	  cout << "Base class is invoked\n";
	}
};

class B: public A{
  void display(){
	cout << "Derived class is invoked\n";
  }
};

int main(){
  A* a;//pointer of base class
  B b;//object of derived class
  a = &b;
  a->display();//Late Binding occurs

  return 0;
}


