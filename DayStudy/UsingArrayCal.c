#include <stdio.h>

int main(void) 
{
  int ary[3];
  int i;

  *(ary+0)=10;    //ary[0]=10

  *(ary+1)=*(ary+0)+10;   //ary[1]=ary[0]+10

  printf("Input keyboard for 3rd array element.");
  scanf("%d", ary+2);   //&ary[2]

  for(i=0; i<3; i++)
  {
    printf("%5d", *(ary+i));    //ary[i]
  }

  return 0;
}
