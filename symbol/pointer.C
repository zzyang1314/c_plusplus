#include <stdio.h>

int main(void){
   int num = 7;
   int *p = &num;
   printf("数值%d所在的地址是%p\n",num,p);
   printf("指针p所在的地址是%p，该地址上所保存的值为%d\n",p,*p);
   *p = 100;
   printf("指针p所在的地址是%p，该地址上所保存的值为%d\n",p,num);

   return 0;
}

//这里*操作符为解引用操作符，它返回指针p所指的对象（左值）
//我们可以对*p赋值（对左值赋值），从而改变p所指的地址上所保存的值，从而改变此地址所存储的变量num的值

//当然我们也可以给指针p赋值，使其指向另外一个地址（这样就改变了在解引用时获取的左值）
/*
int main(void){
  int num = 7, another = -5;
  int *p = &num;
  p = &another;
  printf("%d\n",*p);//此时p指向了another，所以输出了another的值，即-5；
 
  return 0;
}
*/


