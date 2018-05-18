#include <stdio.h>
int main(void){
  int num = 7;
  int *p = &num;
  printf("%d 的地址是 %p\n",num,p);
  //printf是 C++中的输出函数
  //""里面的是要输出到屏上的信息
  //%d\n 是说把逗号后面的结果以十进制显示出来，并换行

  return 0;
}

//上面 int *p定义了一个指向int 类型指针p（我们使用*符号把p声明为指针），并初始化p使其指向int类型的变量num，这里&num中的&是取地址操作符，当&作用于一个对象时，它返回了该对象的地址

//这里指针p指向了num对应的地址
