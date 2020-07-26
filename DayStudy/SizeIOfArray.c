#include <stdio.h>

int main(void) 
{
  int score[5];
  int i;
  int total=0;
  double avg;
  int count;

  count=sizeof(score)/sizeof(score[0]);   //Count array element.


  printf("PLZ input 5 numbers : ");
  for(i=0; i<count; i++)
  {
    scanf("%d", &score[i]);
  }

  for(i=0;i<count;i++)
  {
    total +=score[i];
  }

  avg=total/(double)count;

  for(i=0; i<count; i++)
  {
    printf("%5d", score[i]);
  }

  printf("\n");

  printf("Average : %.1lf\n", avg);

  return 0;
}
