//--Mar 29 2018 yzz---
//C++结构示例：使用构造函数和方法
//使用构造函数初始化数据和方法来计算矩形的面积
#include <iostream>
using namespace std;

struct Rectangle{
  int width,height;
  Rectangle(int w, int h){
	width = w;
	height = h;
  }

  void areaOfRectangle(){
	cout << "Area of Rectangle is :" << (width * height)<<"\n";
  }
};

int main(void){
  struct Rectangle rec = Rectangle(4,6);
  rec.areaOfRectangle();

  return 0;
}
