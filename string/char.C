#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char str1[11] = "Hello";
  char str2[11] = "World";
  char str3[11];
  int len;


  strcpy(str3,str1);//// 复制 str1 到 str3
  cout << "strcpy(str3,str1): " << str3 << "\n";

  strcat(str1,str2);//连接 str1 和 str2
  cout << " strcat(str1,str2): " << str1 << "\n";
  cout << " strcat(str1,str2): " << str2 << "\n";

  len = strlen(str1);
  cout << "strlen(str1): " << len  << "\n";

  return 0;

}
