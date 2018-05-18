//---Mar 29 2018 yzz----
//C++继承
//在C++中，继承是一个对象自动获取其父对象的所有属性和行为的过程。 在示例方式中，您可以重用，扩展或修改在其他类中定义的属性和行为。

//在C++中，继承另一个类的成员的类称为派生类，其成员被继承的类称为基类。 派生类是基类的子类。


#include <iostream>
using namespace std;

class Account{
  public:
	float salary = 60000;
};

class Programmer: public Account{
  public:
	float bonus = 5000;
};

int main(void){
  Programmer p1;

  cout << "Salary: " << p1.salary << "\n";
  cout << "Bonus: " << p1.bonus << "\n";

  return 0;
}
