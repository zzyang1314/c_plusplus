#include <iostream>
using namespace std;

int main(){
  string s;
  cout << "Enter string: ";
  getline(cin,s);//使用默认的'\n'作为终止符
  cout << s << "\n";

  cout << "Enter another string: ";
  getline(cin,s, '!');//以'!'作为终止符
  cout << s << "\n";

  return 0;
}



/*
   getline的函数原型如下:
   istream& getline ( istream &is , string &str , char delim ); //形式一
   istream& getline ( istream& , string& );         //形式二

   getline的第一个函数参数为输入流对象; 第二个为待输入的字符串; 第三个是可选参数, 为自定义的终止符, 当输入到该字符时表示输入完成, 程序只保存终止符前的输入内容, 当省略时默认以'\n'为终止符。需要说明的是, 终止符不会保存到输入的字符串中去。

 */
