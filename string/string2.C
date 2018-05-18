#include <iostream>
//#include <cstring>
using namespace std;

int main(){
  char cs[] = "hello,world";//声明并初始化一个C-串
  string str;//声明一个string串
  str = "hello,world";//对string串进行赋值
  cout << str << "\n";

  ////使用string类型初始化另一个string类型
  string s1(str); 
  cout << s1 << "\n";

  //string s2(str, 2);
  //cout << s2 << "\n";

  string s3(str, 2, 5);
  cout << s3 << "\n";

  //使用C-串初始化string类型串
  string s4(cs);
  cout << s4 << "\n";

  string s5(cs,2);
  cout << s5 << "\n";

  string s6(cs,2,5);
  cout << s6 << "\n";

  return 0;
}
