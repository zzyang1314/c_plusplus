//---Mar 29 2018 yzz---
//C++聚合
//在C++中，聚合是一个进程，一个类将另一个类定义为实体引用(一个类作为另一个类的成员)。 这是另一种重用类的方法。 它是一种表示HAS-A关系的关联形式。
//其中Employee类有Address类的引用作为数据成员。 这样，它可以重用Address类的成员。

#include <iostream>
using namespace std;

class Address{
  public:
	string addressLine,city,state;
	Address(string addressLine,string city,string state){
	  this->addressLine = addressLine;
	  this->city = city;
	  this->state = state;
	}
};

class Employee{
  private:
	Address* address;//Employee HAS-A Address
  public:
	int id;
	string name;
	Employee(int id,string name,Address* address){
	  this->id = id;
	  this->name = name;
	  this->address = address;
	}
	
	void display(){
	  cout << id << "\t"<< name << "\t" << address->addressLine << "\t" << address->city << "\t" << address->state <<"\n";
	}
};

int main(void){
  Address a1 = Address("Apt 240","2020 Kittredge St","CA");
  Employee e1 = Employee(101,"US",&a1);
  e1.display();

  return 0;

}

