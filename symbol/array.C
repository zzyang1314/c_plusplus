#include <stdio.h>

int val[100];

int main(){
  for(int i = 0; i < 100; ++i){
    val[i] = i;
	int *p = val;//近似理解为 int *p = &val[0]
	//这里发生了隐式指针转换；数值自动转换为指向第一个元素的指针
	printf("%d\n",*p);//指针p指向val的第一个元素，即val[0]
  }


  int t = 100;
  while(t--)
	//这里直接对指针进行加减元素，和迭代器一样
	printf("%d\n",*(p++));//输出0～99

  //指针可以做差
  int *p2 = &val[10],*p3 = &val[20];
  printf("%d\n",p3-p2);//10
  printf("%d\n",p2-p3);//-10

  //指针还可以比较大小
  printf("%d\n",p2 < p3 ? p3-p2: p2-p3);//10

  return 0;

}


