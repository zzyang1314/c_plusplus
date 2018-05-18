// 由于类的数据成员一般都为 private 型的, 再使用上面的方式进行初始化就不适合了, 因为 private 数据是不允许外部直接访问的, 将 Point 类中的数据成员改为 private 后再编译运行代码便会报出 error: 'int Point::xPos' is private 这样的错误
    
//要在 Line 类中对 Point 的 private 数据成员进行正常的初始化同样需要借助初始化表达式来完成, 修改后的示例:


#include <iostream>

using namespace std;

class Point{
  public:
	Point(int x, int y){
	  xPos = x; 
	  yPos = y;

	}
	void printPoint(){
	  cout << "(" << xPos <<"," << yPos << ")";
	}

  private:
	int xPos;//private类型的 xPos 和yPos
	int yPos;
};

class Line{
  public:
	Line(int x1, int y1, int x2, int y2):M(x1,y1),N(x2,y2){
	  ;
	}//借助初始表达式完成对M,N 的初始化
	void printLine(){
	  M.printPoint();
	  N.printPoint();
	}
  private:
	Point M;//类对象成员M 和N
	Point N;

};

int main(){
  Line L(101,201,100,200);
  L.printLine();

  cout<<endl;
  return 0;
}
//代码说明：
//通过初始化表达式对象 L 中的 M、N 数据成员的初始化顺序如下: 首先 M 对象的构造函数被调用, 接着调用 N 对象的构造函数, 最后 Line 类的构造函数被调用, 这样便完成了类对象成员的初始化。
