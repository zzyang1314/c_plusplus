//----Mar 29 2018 yzz----
//C++多级继承
//当一个类继承一个被另一个类继承的类时，它被称为C++中的多级继承。 继承是传递的，所以最后的派生类获取所有其基类的所有成员。

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
	void bark(){
	  cout << "Barking...\n";
	}
};

class BabyDog:public Dog{
  public:
	void sleep(){
	  cout << "Sleep...\n";
	}
};

int main(void){
  BabyDog d1;
  d1.eat();
  d1.bark();
  d1.sleep();

  return 0;

}



