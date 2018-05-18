
#include <stdio.h>

int INCORRECT_getIntlen(int *num){

  int *p = num;
  printf("%x %p\n",*p,p);

  while (*p++)//不合理的判断条件
	printf("%x %p\n",*p,p);

  return (p - num);
}


int main(void){

  int num[20];
  int *p[20];//不创建指针数组造成的最终结果也不同
  for(int i = 0; i < 20; i++){
	num[i] = i + 1;
	p[i] = &num[i];
  }

  for(int i = 0; i < 20; i++){

	printf("%x \t %p \n",num[i],p[i]);
  }

  //数组越界造成的后果是未知的
  puts("");
  printf("%d\n",INCORRECT_getIntlen(num));

  //推荐下面这种做法
  printf("%d\n",sizeof(num)/sizeof(int));

  //指针的长度-在32位的编译环境中，sizeof(p) 的结果都是4，也就是一个地址码的长度
  return 0;
}

