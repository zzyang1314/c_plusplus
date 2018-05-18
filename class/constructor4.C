//与构造函数相反, 析构函数是在对象被撤销时被自动调用, 用于对成员撤销时的一些清理工作, 例如在前面提到的手动释放使用 new 或 malloc 进行申请的内存空间。析构函数具有以下特点:
 //1.析构函数函数名与类名相同, 紧贴在名称前面用波浪号 ~ 与构造函数进行区分, 例如: ~Point();
//2.构造函数没有返回类型, 也不能指定参数, 因此析构函数只能有一个, 不能被重载;
//3.当对象被撤销时析构函数被自动调用, 与构造函数不同的是, 析构函数可以被显式的调用, 以释放对象中动态申请的内存。
//当用户没有显式定义析构函数时, 编译器同样会为对象生成一个默认的析构函数, 但默认生成的析构函数只能释放类的普通数据成员所占用的空间, 无法释放通过 new 或 malloc 进行申请的空间, 因此有时我们需要自己显式的定义析构函数对这些申请的空间进行释放, 避免造成内存泄露。

#include <iostream>
#include <cstring>

using namespace std;

class Book{

  public:
	Book(const char *name){//构造函数
      bookName = new char[strlen(name)+1];
	  strcpy(bookName,name);
	}

	~Book(){ //析构函数
	  cout << "析构函数被调用...\n";
	  delete []bookName;//释放通过new申请的空间
	}

	void showName(){
      cout << "Book name:" <<bookName << endl;
	}
  
  private:
	char *bookName;
};


int main(){
  Book CPP("C++ Primer");
  CPP.showName();

  return 0;
}

//



//
