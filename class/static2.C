//--Mar 29 2018 yzz----
//它用于引用所有对象的公共属性，如：Account类中的利率(rateOfInterest)，Employee类中的公司名称(companyName)等
//下面来看看看C++中static关键字的另一个例子，统计创建对象的数量

#include <iostream>
using namespace std;

class Account{
  public:
	int accno;
	string name;
	static int count;

	Account(int accno,string name){
	  this->accno = accno;
	  this->name = name;
      count++;
	}

	void display(){
	  cout << accno << "\t" << name << "\n";
	}
};

int Account::count = 0;

int main(void){
  Account a1 = Account(201,"Tom");
  Account a2 = Account(201,"Lily");

  a1.display();
  a2.display();
 
  cout << "Total Objects are: " << Account::count << "\n";

  return 0;
}


//C++ “::” 作用域符 双冒号
/*
一、
:: 是作用域符，是运算符中等级最高的，它分为三种:

1)global scope(全局作用域符），用法（::name)
2)class scope(类作用域符），用法(class::name)
3)namespace scope(命名空间作用域符），用法(namespace::name)
他们都是左关联（left-associativity)，他们的作用都是为了更明确的调用你想要的变量:

1.如在程序中的某一处你想调用全局变量a，那么就写成::a；（也可以是全局函数）

2.如果想调用class A中的成员变量a，那么就写成A::a；

3.另外一个如果想调用namespace std中的cout成员，你就写成std::cout（相当于using namespace std；cout）意思是在这里我想用cout对象是命名空间std中的cout（即就是标准库里边的cout)

二、
（1）表示“域操作符”
 例：声明了一个类A，类A里声明了一个成员函数void f()，但没有在类的声明里给出f的定义，那么在类外定义f时， 就要写成void A::f()，表示这个f()函数是类A的成员函数。

 三、
1、作用域符号::的前面一般是类名称，后面一般是该类的成员名称。
C++为例避免不同的类有名称相同的成员而采用作用域的方式进行区分。
如：A,B表示两个类，在A,B中都有成员member。那么
A::member就表示类A中的成员member，B::member就表示类B中的成员member
 
 */



