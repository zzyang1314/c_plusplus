#include <iostream>

using namespace std;

class D{
  public:
	D(){
	  cout << "D()" << endl;
	}

	~D(){
	  cout << "~D()" << endl;
	}

  protected:
	int d;
};

class B: virtual public D{//基类D的派生类 B（公有继承）
  public:
	B(){
	  cout << "B()" << endl;
	}

	~B(){
	  cout << "~B()" << endl;
	}

  protected:
	int b;
};


class A: virtual public D{
  public:
	A(){
	  cout << "A()" << endl;
	}

	~A(){
	  cout << "~A()" << endl;
	}

  protected:
	int a;
};


class C: public B, public A{//A,B都是公有继承
  public:
	C(){
	  cout << "C()" << endl;
	}

	~C(){
	  cout << "~C()" << endl;
	}

  protected:
	int c;
};


int main(){
  cout << "Hello World!" << endl;
  C c;// D,B,A,C
  cout << sizeof(c) << endl;

  return 0;
}

//另外多继承(环状继承),A->D, B->D, C->(A，B)，例如：
/*
class D{......};
class B: public D{......};
class A: public D{......};
class C: public B, public A{.....};
*/

//这个继承会使D创建两个对象,要解决上面问题就要用虚拟继承格式
//格式：class 类名: virtual 继承方式 父类名
/*
class D{......};
class B: virtual public D{......};
class A: virtual public D{......};
class C: public B, public A{.....};
*/

//虚继承--（在创建对象的时候会创建一个虚表）在创建父类对象的时候



/*
   继承的访问控制部分
   1.子类不能直接使用父类private成员
   2.public继承：子类继承父类的public与protected成员，权限不变
   3.protected继承：子类继承父类的public与protected成员，权限统一为protected
   4.private继承(默认)：子类继承父类的public与protected成员，权限统一为private
   */


