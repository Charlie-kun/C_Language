#include <stdio.h>

void swap(int *pa, int *pb);    //Each parameter change method

int main(void)
{
  int a=10, b=20;

  swap(&a, &b);    //Two parameters address
  printf("a:%d, b:%d\n", a,b);

  return 0;
}

void swap(int *pa, int *pb)    //Just parameters address change. memory save
{
  int temp;

  temp =*pa;
  *pa=*pb;
  *pb=temp;
}
