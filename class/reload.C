//---Mar 29 2018 yzz---
//C++重载

#include <iostream>
using namespace std;

class Cal{
  public:
	static int add(int a, int b){
	  return a + b;
	}

	static int add(int a, int b, int c){
	  return a + b + c;
	}
};

int main(void){
  Cal c;
  cout << c.add(10,20) << "\n";
  cout << c.add(12,20,23) << "\n";

  return 0;
}


/*
如果创建两个或多个成员(函数)具有相同的名称，但参数的数量或类型不同，则称为C++重载。 在C++中，我们可以重载：
方法
构造函数
索引属性
这是因为这些成员只有参数。

C++中的重载类型有：
1.函数重载
2.运算符重载

在C++中，具有两个或更多个具有相同名称但参数不同的函数称为函数重载。
函数重载的优点是它增加了程序的可读性，不需要为同一个函数操作功能使用不同的名称。
*/
