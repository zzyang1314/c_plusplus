//在C++中，对象是一个真实世界的实体，例如：椅子，汽车，笔，手机，笔记本电脑等。换句话说，对象是一个具有状态和行为的实体。 这里，状态意味着数据，而行为意味着功能。
//对象是一个运行时实体，它在运行时创建。
//在C++中，对象是一组相似的类。 它是一个模板，用于从中创建对象。 它可以有字段，方法，构造函数等。
//下面来看看一个只有三个字段的C++类的例子
//它创建类的实例，初始化对象并打印对象值

#include <iostream>
using namespace std;

class Student{
  public:
	int id;
	float salary;
	string name;
};


int main(){
  Student s1;
  //Student是类型，s1是引用Student类的实例的引用变量。

  s1.id = 22;
  s1.salary = 6000;
  s1.name = "xiaoming";
 
  cout << s1.id << endl;
  cout << s1.salary << endl;
  cout << s1.name << endl;

  return 0;
}
