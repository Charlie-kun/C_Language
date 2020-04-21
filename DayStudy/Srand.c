#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) 
{
  int lotto[6];
  int num,i,j;

  srand((unsigned int)time(NULL));    //Srand seed used time return value 
  i=0;
  while(i<6)
  {
    num=(rand()%45)+1;    //Number range is 1~45th limited.
    for(j=0;j<i;j++)
    {
      if(num==lotto[j])
      {
        break;
      }
    }
    if(i==j)
    {
      lotto[i]=num;
      i++;
    }
  }
  for(i=0;i<6;i++)
  {
    printf("%5d", lotto[i]);
  }

  return 0;
}
