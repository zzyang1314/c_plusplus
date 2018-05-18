//数组作为函数参数传递
//虽然很多时候数组名被调用时会被转换成指针，但是不可否认的是它的确是特殊类型,并且在若干地方某些操作并不会发生,如使用&,sizeof,以及初始化赋值给因引用时
//在定义的时候：
//int function( int *a);
//int function( int *a[]);
//int function( int *a[10]);

//这三种定义，会被编译器解析成int function。
//也就是说从编译器开始，已经成为指针了，在函数体内部没有办法知道数组的长度
//这时c++中的vector就派上用场了

#include <cstdio>
#include <vector>

int getVectorSize(vector <int> &v){
  return v.size();
}


int main(){

  vector <int> v;
  v.push_back(1);
  v.push_back(2);

  printf("%d\n",getVectorSize(v));

  return 0;
}


//如果你不想用vector，有以下三种方法
//1. 仿照字符串，加一个结束标记符（比如null）
//2. 传递指向数组的第一个元素的指针和最后一个元素的下一个位置的指针（就像我们在排序时调用的sort（a，a+n）一样）

//3. 将第二个形参定义为数组的大小(size_t size),传递的值可以为：sizeof(a)/sizeof(*a)

//push_back(): 在vector尾部加一个数据
//vector.size(): 得到vector的大小

