//构造函数的显式定义
//由于在大多数情况下我们希望在对象创建时就完成以些对成员属性的初始化等工作，而默认的构造函数无法满足我们的要求，所以我们需要显式定义一个构造函数来覆盖掉默认构造函数以便来完成必要的初始化工作，当用户自定义构造函数后编译器就不会再为对象生成默认构造函数。
//在构造函数的特点中我们可以看到，构造函数的名称必须和类名相同，并且没有返回值和返回类型。

#include <iostream>

using namespace std;

class Point{
  public:
	Point(){ //声明并定义构造函数
	  cout < <"自定义的构造函数被调用...\n";
	  xPos = 100;//利用构造函数对数据成员xPos,yPos进行初始化
	  yPos = 100;
	}

	void printPoint(){//实现printPoint函数
	  cout << "xPos = " << xPos << endl;
	  cout << "yPos = " << yPos << endl;
	}

  private:
	int xPos;
	int yPos;
};

int main(){
  Point M;//用定义好的类创建一个对象 点M
  M.printPoint();//输出M点的信息

  return 0;
}

//代码说明：
//在Point类的public成员中我们定义类一个构造函数Point()，可以看到这个Point构造函数并不像printPoint函数有个void类型的返回值，这正是构造函数的一特点。在构造函数中，我们输出类一句提示信息，自定义的构造函数被调用，并且将对象中的数据成员xPos和yPos初始化为100.
//在main函数中，使用Point类创建类一个对象，并调用对象的方法printPoint输出m的属性信息，根据数次结果可以看到，自定义的构造函数被调用了，所以xPos和yPos的值此时都是100，而不是一个随机值.



