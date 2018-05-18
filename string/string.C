#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  string s1 = "Welcome to C++ Programming";
  string s2 = s1;//复制
  cout << s2 << "\n";

  string s3 = "hello";
  string s4 = "world";

  s3 += s4;//连接
  cout << "hello + world: " << s3 << "\n";
  
  string s5 = "hello";
  cout << s5.find("ll")<< "\n";//返回子串第一次出现的位置

  string s6 = "hello";
  cout << s6.replace(0,2,"aaa") << "\n";
  //将字符串s4中下标0-2部分字符串替换为"aaa"

  string s7 = "hello";
  cout << "hello.append(world):  " << s7.append("world") << "\n";//将"world"追加到s7中
  
  //string s8 = "hello";
  //cout << s8.push_back('!') << "\n";//将'!'追加字符到字符串s8中
  
  string s9 = "hello";
  cout << s9.insert(2,"www") << "\n";
  //将字符串"www"插入到字符串s中, 插入位置为2
  
  string s10 = "hello";
  cout << s10.erase(1,2) << "\n";//从下标为1处向后擦去2个字符
  
  //string s11 = "hello";
  //string s12 = "world";
  //s11.swap(s12);
  //cout << s11 << "\n";//将s1与s2中的字符串进行交换

  //string s13 = "hello";
  //cout << reverse(s13.begin(),s13.end())<< "\n";
  //倒置串|需要包含algorithm头文件
  
  return 0;
}
