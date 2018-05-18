#include <iostream>
#include <string>
using namespace std;

int main(){
  string http = "www.google.com";//定义一个string类对象
  cout << "http.length(): " << http.length() << "\n";
  //打印字符串长度

  cout << "http.append(C++): " << http.append("/C++") << "\n";
  //拼接,打印结果为：www.runoob.com/C++

  int pos = http.find("/C++");//查找"C++"在字符串中的位置
  cout << pos << "\n";
  http.replace(pos,4,"");//从位置pos开始，之后的4个字符替换为空，即删除
  cout << http << "\n";
  //删除


  int first = http.find_first_of(".");//从头开始寻找字符'.'的位置
  int last = http.find_last_of(".");//从尾开始寻找字符'.'的位置
  cout << http.substr(first + 1, last - first - 1) << "\n";//提取"google"子串并打印 
  //找子串google


  return 0;
}
