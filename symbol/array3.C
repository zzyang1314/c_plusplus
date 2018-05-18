
#include <stdio.h>

int val[100][100];

int main(void){

  val[2][1] = 666;
  //如何用指针取出val[2][1]
  printf("%d",*(*(val + 2) + 1));

  return 0;
}
