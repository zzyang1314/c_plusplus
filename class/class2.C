//和class 执行同样的操作，只不过在这里定义了一个基类box的派生类volume，
//类的公共数据成员可以使用直接成员访问操作符:(.) 访问

#include <iostream>

using namespace std;

class Box{
  public:
	void setLength(int l){
	  length = l;
	}

	void setBreadth(int b){
	  breadth = b;
	}

	void setHeight(int h){
	  height = h;
	}

  protected:
	double length;//length of a box
	double breadth;//breadth of a box
	double height;//length of a box
};

class volume: public Box{
  public:
	int getVolume(){
	  return (height * breadth * length);
	}
};

int main(){
  volume Volume1;//declare box1 of type Box
  volume Volume2;//declare box2 of type Box

  Volume1.setHeight(5.0);
  Volume1.setBreadth(6.0);
  Volume1.setLength(7.0);

  Volume2.setHeight(10.0);
  Volume2.setBreadth(12.0);
  Volume2.setLength(13.0);
  
  cout << "volume of box1: " << Volume1.getVolume() << endl;
  cout << "volume of box2: " << Volume2.getVolume() << endl;

  return 0;
}
