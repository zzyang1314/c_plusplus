//---Mar 29 2018 yzz----
//接口
//接口可以用来描述一个 C++ 类的行为或功能,但是并不需要对这个类进行实现。

//C++ 接口是通过抽象类来实现的，这些抽象类不应与数据抽象混淆，数据抽象的概念：概念结构是对现实世界的一种抽象，从实际的人、物、事和概念中抽取所关心的共同特性，忽略非本质的细节，把这些特性用各种概念精确地加以描述，这些概念组成了某种模型。

//一个抽象类的声明里至少要有一个函数作为纯虚函数。在函数形参表后面写上 “= 0” 以指定纯虚函数：

//考虑下面的例子,父类为基类提供了一个接口来实现函数 getArea()：

#include <iostream>

using namespace std;
//基类(Base class) Shape 
class Shape{
  public:
	//pure virtual function providing interface framework
	virtual int getArea() = 0;

	void setWidth(int w){
	  width = w;
	}

	void setHeight(int h){
	  height = h;
	}

  protected:
	int width;
	int height;
};

//derived classes 派生类
class Rectangle: public Shape{
  public:
	int getArea(){
	  return (width * height);
	}
};

class Triangle:public Shape{
  public:
	int getArea(){
	  return (width * height)/2;
	}
};

int main(){
  Rectangle Rect;
  Triangle Tri;

  Rect.setWidth(5);
  Rect.setHeight(7);

  // Print the area of the object 输出对象的面积
  cout << "Total Rectangle area: " << Rect.getArea() << endl;

  Tri.setWidth(5);
  Tri.setHeight(7);
  //Print the area of the object
  cout << "Total Triangle area: " << Tri.getArea() << endl;

  return 0;

}


