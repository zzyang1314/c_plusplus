//---Mar 29 2018 yzz---
//C++运行时多态性示例
//通过使用两个派生类

#include <iostream>
using namespace std;

class Shape{
  public:
	virtual void draw(){
	  cout << "drawing...\n";
	}
};

class Rectangle: public Shape{
  public:
	void draw(){
	  cout << "drawing rectangle...\n";
	}
};

class Circle: public Shape{
  public:
	void draw(){
	  cout << "drawing circle...\n";
	}
};


int main(void){
  Shape *s;
  Shape sh;
  Rectangle rec;
  Circle cir;

  s = &sh;
  s->draw();

  s = &rec;
  s->draw();

  s = &cir;
  s->draw();

}


