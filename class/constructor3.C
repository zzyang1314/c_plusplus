//对象中的一些数据成员除了在构造函数体中进行初始化外，还可以通过调用初始化表来进行完成，要使用初始化表来对数据成员进行初始化时使用: 号进行调出，示例如下
/*
Point(int x = 0, int y = 0):xPos(x),yPos(y){
  cout << "调用初始化表对数据成员进行初始化!\n";
}
*/
//在 Point 构造函数头的后面，通过单个冒号 : 引出的就是初始化表，初始化的内容为 Point 类中 int 型的xPos 成员和yPos 成员，其效果和xPos = x;  yPos = y; 是相同的
//与在构造函数体内进行初始化不同的是，使用初始化列表进行初始化是在构造函数被调用以前就完成的。每个成员在初始化表中只能出现一次，并且初始化的顺序不是取决于数据成员在初始化表中出现的顺序，而是取决于在类中声明的顺序

//此外，一些通过构造函数无法进行初始化的数据类型可以使用初始化表进行初始化，如：常量成员和引用成员。使用初始化表对对象成员进行初始化的完整示例：

#include <iostream>

using namespace std;

class Point{
  public:
	Point(int x = 0, int y = 0):xPos(x),yPos(y){ 
	  cout < <"调用初始化表对数据成员进行初始化!\n";
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
  Point M(10,20);//创建对象M 并初始化xPos, yPos 为10 和20
  M.printPoint();//输出M点的信息

  Point N(200);//创建对象N 并初始化xPos 为200, yPos 使用参数y的默认值0
  N.printPoint();//输出N 点的信息
  
  Point P;//创建对象P 并使用构造函数的默认参数
  P.printPoint();//输出 P 点的信息
  
  return 0;
}

/*
 //编译运行的结果：
root [0] .L fun2.C 
root [1] main()
自定义的构造函数被调用...
xPos = 10
yPos = 20
自定义的构造函数被调用...
xPos = 200
yPos = 0
自定义的构造函数被调用...
xPos = 0
yPos = 0
(int)0
*/

//代码说明：
//在这个示例的构造函数Point(int x = 0, int y = 0)使用了参数列表并且对参数进行了默认参数设置为0. 在main函式中公创建了三个对象M, N, P.

//M 对象不再使用默认参数将 M 的坐标初始化为10 和20.
//N 对象使用一个默认参数y，xPos属性初始化为200.
//P 对象完全使用默认参数将 xPos 和yPos 初始化为0.


