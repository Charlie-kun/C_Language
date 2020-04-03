//Use String at pointer.
/*
#include <stdio.h>

int main(void) 
{
  char *dessert="apple";
  printf("Today's dessert is %s.\n", dessert);
  dessert="banana";
  printf("Tomorrow's dessert is %s.\n", dessert);
  return 0;
}
*/

//Print for string at puts, fputs.
#include<stdio.h>

int main(void)
{
  char str[80]="apple juice";
  char *ps="banana";

  puts(str);
  fputs(ps, stdout);
  puts("milk");

  return 0;
}
