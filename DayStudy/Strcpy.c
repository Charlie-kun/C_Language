#include <stdio.h>
#include <string.h>

int main(void) 
{
  char str1[80]="cat";
  char str2[80];

  strcpy(str1,"tiger"); //Copy "tiger" at str1 array
  strcpy(str2,str1);  //Copy str2 array to str1 array

  printf("%s, %s\n", str1, str2);
  return 0;
}
