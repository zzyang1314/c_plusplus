//-------Mar 29 2018 yzz-------
//类是用于指定一个对象的形式，它将数据表示和用于处理数据的方法组合成一个整洁的包。一个类的数据和函数统称为类的成员。
//一个类可以包含私有、保护和公有成员
//当你定义了一个类，你就定义一个数据类型的蓝图。这实际上没有定义任何数据，它只是定义了类名是什么意思，也就是意味着，一个类的对象包含什么，在这样一个对象上可以执行哪些操作。
//定义一个类，以关键字 class 开始，紧随其后的是类名，和类的主体，类的主体由一对大括号封闭。一个类定义必须以分号或者一系类声明结尾。例如，我们通过使用关键字 class 定义 Box 数据类型，如下所示：

//一个类为对象提供了蓝图，对象是由类创建而来。我们声明一个类的对象的方式，用声明其他基本类型变量的方式完全相同。以下语句声明 Box 类的两个对象:
//Box Box1; Box Box2;
//类的对象的公共数据成员可以使用直接成员访问操作符：(.)访问。

#include <iostream>

using namespace std;

class Box{
  public:
	double length;//length of a box
	double breadth;//breadth of a box
	double height;//length of a box
};

int main(){
  Box Box1;//declare box1 of type Box
  Box Box2;//declare box2 of type Box

  double volume = 0.0;//store the volume of a box here

  //box1 secification
  Box1.height  = 5.0;
  Box1.length  = 6.0;
  Box1.breadth = 7.0;

  //box2 secification
  Box2.height  = 10.0;
  Box2.length  = 12.0;
  Box2.breadth = 13.0;

  volume = Box1.height * Box1.length * Box1.breadth;
  cout << "volume of box1: " << volume << endl;

  volume = Box2.height * Box2.length * Box2.breadth;
  cout << "volume of box2: " << volume << endl;

  return 0;
}
