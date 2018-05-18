#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char key[25],buffer[25];
  cout << "Enter the key string: ";
  cin.getline(key,25);
  cout << "Enter the buffer string:";
  cin.getline(buffer,25);
  strcat(key,buffer);

  cout << "key = " << key << "\n";
  cout << "buffer = " << buffer << "\n";

  return 0;
}
