//clear()清除容器中数据

#include <string.h>
#include <vector>
#include <iostream>
using namespace std;

int main(){
  vector<int>obj;//创建一个向量存储容器
  for(int i = 0; i < 10; i++){//push_back(item)在数组最后添加数据
	obj.push_back(i);
	cout<<obj[i]<<",";
  }

  obj.clear();//清除容器中所有数据

  for(int i = 0; i < obj.size(); i++){//size()容器中实际数据个数
	cout<<obj[i]<<",";
  }

  return 0;
}
