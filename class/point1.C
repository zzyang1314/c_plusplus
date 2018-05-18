//在类定义时定义成员函数
#include <iostream>

using namespace std;

class Point{
  public:
	void setPoint(int x, int y){//实现setPoint函数
	  xPos = x;
	  yPos = y;
	}

	void printPoint(){//实现printPoint函数
	  cout << "x = " << xPos << endl;
	  cout << "y = " << yPos << endl;
	}

  private:
	int xPos;
	int yPos;
};

int main(){
  Point M;//用定义好的类创建一个对象 点M
  M.setPoint(10,20);//设置M 点的x,y 值
  M.printPoint();//输出M点的信息

  return 0;
}

//与类的定义相比，在类内实现成员函数不再是在类内进行声明，而是直接将函数进行定义，在类中定义成员函数时，编译器默认回争取将其定义为inline型函数。

