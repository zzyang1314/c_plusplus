//---Mar 29 2018 yzz-------- 
//在C++编程中，this是一个引用类的当前实例的关键字。 this关键字在C++中可以有3个主要用途。
/*
用于将当前对象作为参数传递给另一个方法。
用来引用当前类的实例变量。
用来声明索引器。
*/

//this关键字在C++中指的是当前类的字段

#include <iostream>
using namespace std;

class Employee{
  public:
	int id;
	string name;
	float salary;

	Employee(int id, string name, float salary){
	  this->id     = id;
	  this->name   = name;
	  this->salary = salary;
	}

	void display(){
	  cout << id << "\t" << name << "\t" << salary <<"\n";
	}
};


int main(void){
  Employee e1 = Employee (101, "Yang", 90000);
  Employee e2 = Employee (106, "yang", 980000);//creating an object of Employee
  e1.display();
  e2.display();

  return 0;
}
