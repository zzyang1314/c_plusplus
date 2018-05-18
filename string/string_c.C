#include <iostream>
#include <cstring>

using namespace std;

int main(){
  string str1 = "Hello";
  string str2 = "World";
  string str3;
  int len;

  str3 = str1;//复制 str1 到 str3
  cout << "str3: " <<str3 << "\n";

  str3 = str1 + str2;//连接 str1 和 str2
  cout << "str1 + str2: " <<str3 << "\n";

  len = str3.size();//连接后，str3 的总长度
  cout << "str3.size(): " << len  << "\n";

  return 0;

}
