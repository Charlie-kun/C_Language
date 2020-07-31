#include <stdio.h>

int main(void) 
{
  int ary[5]={10, 20, 30, 40, 50};
  int *pa=ary;
  int *pb=pa+3;   //4th element in array

  printf("pa : %u\n", pa);
  printf("pb : %u\n", pb);
  pa++;   //Move to next array element 
  printf("pb - pa : %u\n", pb-pa);

  printf("Print to all array element : ");
  if(pa<pb)printf("%d\n", *pa);
  else printf("%d\n", *pb);
 
  return 0;
}
