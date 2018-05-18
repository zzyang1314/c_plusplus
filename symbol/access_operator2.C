#include <iostream>
using namespace std;

class A{
  public:
	void action(){
	  cout << "Action in class A!" <<endl;
	}
};


class B{
  A a;
  public:
  A* operator->(){//返回指针
	return &a;
  }

  void action(){
	cout << "Action in class B!" <<endl;
  }
};

class C{
  B b;
  public:
  B operator->(){//返回对象
	return b;
  }

  void action(){
	cout << "Action in class C!" <<endl;
  }
};

int main(int argc, char *argv[]){
  C* pc = new C;
  pc->action();//指针调用（使用默认语义）
  C c;
  c->action();//对象调用（使用重载语义）
  getchar();

  return 0;

}

//定义了3个类，C 包含B ，B 包含 A。A,B,C 都定义类一个action 的成员函数。B 和C 都有重载箭头操作符，不同的是B 的重载箭头操作符返回的是A 类对象的指针，而C 的重载箭头操作符返回的是B 类对象

/*
   其中的代码
   C* pc = new C;
   pc->action();

   输出的结果是:Action in class C!
   这个结果比较好理解，pc是类对象指针，此时的箭头操作符使用的是内置含义，对pc解引用然后调用对象的成员函数action。

//--------
而下面的代码
C c;
c->action();

输出的结果是:Action in class A!

其实c->action();的含义与c.operator->().operator->()->action();相同。

c是对象，c后面的箭头操作符使用的是重载箭头操作符，即调用类C的operator->()成员函数。此时返回的是类B的对象，所以调用类B的operator->()成员函数，B的operator->()返回的是指针，所以现在可以使用内置箭头操作符了。对B的operator->()返回的指针进行解引用，然后调用解引用后的对象的成员函数action，此时调用的就是类A的action()。这里存在一个递归调用operator->()的过程，最后再使用一次内置含义的箭头操作符。

总结：对箭头（->）运算符的调用，最终都要归结到对指针自身的（->）调用。

//但是我运行得到的是Action in class C! Action in class B!
 */




