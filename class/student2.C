//C++类示例: 通过方法初始化和显示数据
#include <iostream>
using namespace std;

class Student{
  public:
	int id;
	string name;

	void insert(int i, string n){
	  id = i;
	  name = n;
	}

	void display(){
	  cout << id << "\t"<< name <<endl;
	}
};

int main(){
  Student s1;//creating an object of Student
  Student s2;//creating an object of Student
  s1.insert(26,"xiaoming");
  s2.insert(28,"xiaowang");
  s1.display();
  s2.display();

  return 0;
}
