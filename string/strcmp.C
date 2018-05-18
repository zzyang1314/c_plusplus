#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char key[] = "mango";
  char buffer[50];
  do{
	cout << "What is my favourite fruit is ?";
	cin >> buffer;
  }
  while (strcmp(key,buffer) != 0);
  cout << "Answer is correct!\n";

  return 0;
}
