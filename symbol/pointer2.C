
#include <stdio.h>

int main(void){

  int val = 7;
  int *p = &val;
  int **p2 = &p;//**声明一个指向指针的指针
  printf("val 的值为 %d %d",*p,**p2);//**p2为两次解引用，可看做*(*p2)

  return 0;
}


//由于指针也要占用内存空间存放其值，所以我们也可以定义一个指向指针的指针
