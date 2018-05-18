//--Mar 29 2018 yzz-----
//C++单级继承示例：继承方法

#include <iostream>
using namespace std;

class Animal{
  public:
	void eat(){
	  cout << "Eating..." << "\n";
	}
};


class Dog:public Animal{
  public:
	void bark(){
	  cout << "Barking..." << "\n";
	}
};


int main(void){
  Dog d1;
  d1.eat();
  d1.bark();

  return 0;
}
