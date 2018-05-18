//--Mar 29 2018 yzz----
//C++运行时多态性示例
//它通过方法覆盖来实现，也称为动态绑定或后期绑定

#include <iostream>
using namespace std;

class Animal{
  public:
	void eat(){
	  cout << "Eating...\n";
	}
};

class Dog: public Animal{
  public:
	void eat(){
	  cout << "Eating bread...\n";
	}
};

int main(void){
//Dog d = Dog();//不知道为什么这个语句是错误的
  Dog d;
  d.eat();

  return 0;

}

