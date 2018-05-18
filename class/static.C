//--Mar 29 2018 yzz----
//在C++中，static是属于类而不是实例的关键字或修饰符。 因此，不需要实例来访问静态成员。 在C++中，static可以是字段，方法，构造函数，类，属性，操作符和事件
//使用static关键字声明字段称为静态字段。它不像每次创建对象时都要获取内存的实例字段，在内存中只创建一个静态字段的副本。它被共享给所有的对象。

//它用于引用所有对象的公共属性，如：Account类中的利率(rateOfInterest)，Employee类中的公司名称(companyName)等

#include <iostream>
using namespace std;

class Account{
  public:
	int accno;
	string name;
	static float rateofInterest;

	Account(int accno,string name){
	  this->accno = accno;
	  this->name = name;

	}
	void display(){
	  cout << accno << "\t" << name << "\t" << rateofInterest << "\n";
	}
};

float Account::rateofInterest = 6.5;

int main(void){
  Account a1 = Account(201,"Tom");
  Account a2 = Account(201,"Lily");

  a1.display();
  a2.display();

  return 0;
}

