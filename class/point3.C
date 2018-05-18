//类的对象可以作为另一个类的数据成员, 在定义类时, 与普通的数据成员一样, 在声明时无法进行初始化, 例如有个Line类中有两个 Point 类的对象作为数据成员, 在声明时
/*private:
  int xPos(10, 20);
  int yPos(100, 200);
 */				
//这样是错误的, 所以在初始化类对象成员时也需要一定的方法。

//情况一: 
//还以 Line 类和 Point 类为例, 当 Point 类中的数据成员全部为 public 时, 可以在 Line 类的构造函数内完成初始化, 像以下示例的情况:

#include <iostream>
using namespace std;

class Point{
  public:
	void printPoint(){
	  cout <<"(" << xPos <<"," <<yPos <<")\n";
	}

	int xPos;//public 类型的xPos 和 yPos
	int yPos;
};

class Line{
  public:
	Line(int x1, int y1, int x2, int y2){
	  M.xPos = x1;//在构造函数内完成类对象的初始化
	  M.yPos = y1;
	  N.xPos = x2;
	  N.yPos = y2;
	}

	void printLine(){
	  M.printPoint();
	  N.printPoint();
	}

  private:
	Point M;//类对象成员M 和N
	Point N;
};


int main(){
  Line L(10,20,100,200);
  L.printLine();

  return 0;
}
// 由于Point类中的数据成员全为Public的，所以可以通过  对象名.数据成员名 的方式直接进行访问。可以看到, Line 类中有两个 Point 类型的数据成员M 和N,  然后通过  对象名.数据成员  的方式在Line类的构造函数中完成初始化。




