//在类外定义成员函数
//在类外定义成员函数通过在类内进行声明，然后在类外通过作用域操作符 进行实现，实现形式如下：
/*
返回类型 类名::成员函数名(参数列表){
 //函数体
}
*/
#include <iostream>

using namespace std;

class Point{
  public:
	void setPoint(int x, int y);//在类内对成员函数进行声明
	void printPoint();

  private:
	int xPos;
	int yPos;
};

void Point::setPoint(int x, int y){//通过作用域实现‘::’setPoint函数
  xPos = x;
  yPos = y;
}

void Point::printPoint(){//实现printPoint 函数
  cout << "x = "<< xPos << endl;
  cout << "y = "<< yPos << endl;
}

int main(){

  Point M;//用定义好的类创建一个对象 点M
  M.setPoint(10,20);//设置M 点的x,y 值
  M.printPoint();//输出M 点的信息

  return 0;

}


//依setPoint成员函数来说，在类内声明的形式为void setPoint(int x, int y); 那么在类外对其定义时函数开头就应该是void Point::setPoint(int x, int y)这种形式，其返回类型、成员函数名、参数列表都要与类内声明的形式一致。
