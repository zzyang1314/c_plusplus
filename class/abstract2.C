//----Mar 29 2018 yzz----
//C++抽象类
/*
抽象类是在C++中实现抽象的方式。 C++中的抽象是隐藏内部细节和仅显示功能的过程。 抽象可以通过两种方式实现：
1. 抽象类
2. 接口
抽象类和接口都可以有抽象所需的抽象方法。

在C++类中，通过将其函数中的至少一个声明为纯虚函数，使其变得抽象。 通过在其声明中放置“= 0”来指定纯虚函数。 它的实现必须由派生类提供。
下面来看看一个C++中的抽象类的例子，它有一个抽象方法draw()。 它的实现由派生类：Rectangle和Circle 提供。 这两个类对抽象方法draw()有不同的实现。
*/

#include <iostream>
using namespace std;

class Shape{
  public:
	virtual void draw() = 0;
};

class Rectangle : Shape{
  public:
	void draw(){
	  cout << "drawing rectangle...\n";
	}
};

class Circle: Shape{
  public:
	void draw(){
	  cout << "drawing circle...\n";
	}
};

int main(){
  Rectangle rec;
  Circle cir;
  rec.draw();
  cir.draw();

  return 0;
}
