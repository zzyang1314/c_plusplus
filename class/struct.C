//----Mar 29 2018 yzz---
//在C++中，类和结构体(struct)是用于创建类的实例的蓝图(或叫模板)。结构体可用于轻量级对象，如矩形，颜色，点等。

//与类不同，C++中的结构体(struct)是值类型而不是引用类型。 如果想在创建结构体之后不想修改的数据，结构体(struct)是很有用的。

//一个简单的结构体Rectangle示例，它有两个数据成员：width和height

#include <iostream>

using namespace std;

struct Rectangle{
  int width,height;
};

int main(void){
  struct Rectangle rec;
  rec.width = 8;
  rec.height = 5;

  cout << "Area of Rectangle is :"  << (rec.width * rec.height)<<"\n";

  return 0;
}
