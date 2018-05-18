//访问（直接数组访问&迭代器访问）
#include <string.h>
#include <vector>
#include <iostream>
using namespace std;

int main(){
  //顺序访问
  vector<int>obj;//创建一个向量存储容器
  for(int i = 0; i < 10; i++){//push_back(item)在数组最后添加数据
	obj.push_back(i);
    //cout<<obj[i]<<",";
  }

  cout << "直接利用数组：";
  for(int i = 0; i < 10; i++){//方法一
	cout << obj[i]<<"\t";

  }

  cout << endl;
  
  cout << "利用迭代器：";
  //利用迭代器将容器中数据输出
  vector<int>::iterator it;//声明一个迭代器，来访问vector容器，作用：遍历或者指向vector容器的元素

  for(it = obj.begin();it!= obj.end(); it++){
	cout << *it << "\t";

  }

  cout << endl;
  return 0;

}


