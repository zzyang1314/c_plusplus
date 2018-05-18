//--Mar 29 2018 yzz----
//C++函数重写/覆盖

//在C++中，如果派生类定义了与其基类中定义的函数相同，则称函数重写。 它用于实现运行时多态性。 它使您能够提供已由其基类提供的函数有所区别的特定实现。
//在这个例子中，我们重写/覆盖了eat()函数。
//polymorphism.C 

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

