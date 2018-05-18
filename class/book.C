//static 类型的数据成员为静态成员, 他的特点是: 无论对象创建了多少个, 该数据成员的实例只有一个, 会被该类所创建的所有对象共享, 其中任何一个对象对其操作都会影响到其他对象。该类型的数据初始化是放在类外进行的, 其基本格式如下:
 
//类型 类名::成员变量名 = 初始化值/表达式;
//一个示例: 统计一共创建了多少个对象, 并且在一番销毁后还剩多少。


#include <iostream>
using namespace std;

class Book{
  public:
	Book(){
	  ibookNumber++;
	}//通过构造函数访问 static 型数据 ibookNum 并使其自增1

	~Book(){
	  ibookNumber--;
	}//对象在被撤销时将 static 型数据 ibookNum 并使其自减1

	void showNum(){
	  cout << "Book number = " << ibookNumber << endl;
	}

  private:
	static int ibookNumber;//static 类型数据成员 ibookNum
};


int Book::ibookNumber = 0;//在类外对 static 类型的数据成员进行初始化

int main(){
  Book A; Book B; Book C; Book D; Book E;//创建一些对象

  A.showNum();//使用对象 A 查看当前对象个数
  B.showNum();//使用对象 B 查看当前对象个数

  cout << "销毁一些对象...\n";

  B.~Book();
  C.~Book();//将 B, C 对象进行撤销
  D.showNum();//使用 D 对象查看剩余对象个数
  E.showNum();//使用 E 对象查看剩余对象个数

  return 0;

}

//代码说明:
//在上面代码的类Book中, 我们声明了一个 static 类型的 ibookNumber 作为创建多少对象的统计变量, Book的构造函数的作用是当对象创建时将 ibookNumber 的值自增1, 而析构函数的则负责将 ibookNumber 自减1。

//main函数中, 创建了 A-E共5个对象, 在创建完成后, 通过 A 对象输出对象的总数和 B 对象输出的结果是相同的, 都是5个, 然后销毁 B、C 对象, 用D、E对象查看剩余对象个数, 结果都为3, 可以看出, static型的数据成员任何对象都可以进行访问, 并且在创建后所产生的实例是唯一的。

