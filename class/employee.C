#include <iostream>
using namespace std;

class Employee{
  public:
	int id;
	string name;
	int salary;

	void insert(int i, string n,int s){
	  id = i;
	  name = n;
	  salary = s;
	}

	void display(){
	  cout << id << "\t" << name << "\t" << salary <<endl;
	}

};

int main(){
  Employee e1;
  Employee e2;

  e1.insert(201,"Wei", 99000);
  e2.insert(205,"Yang",79000);

  e1.display();
  e2.display();

  return 0;
}
