//排序
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  vector<int>obj;//创建一个向量存储容器

  obj.push_back(1);
  obj.push_back(3);
  obj.push_back(0);

  sort(obj.begin(),obj.end());//从小到大

  cout << "从小到大：" <<endl;
  for(int i = 0; i < obj.size(); i++){//size()容器中实际数据个数
	cout<<obj[i]<<",";
  }
  cout << "\n" << endl;

  cout << "从大到小：" <<endl;
  reverse(obj.begin(),obj.end());//从大到小
  for(int i = 0; i < obj.size(); i++){//size()容器中实际数据个数
	cout<<obj[i]<<",";
  }

  return 0;
}
