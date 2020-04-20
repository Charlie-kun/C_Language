#include <stdio.h>
#include<time.h>

int main(void) 
{
  char *day[7]={"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
  time_t res;
  struct tm *pt;

  time(&res);
  pt=localtime(&res);

  printf("%dy ", pt->tm_year+1900);
  printf("%dm ", pt->tm_mon+1);
  printf("%dd ", pt->tm_mday);
  printf("%sday ", day[pt->tm_wday]);
  printf("%d : %d : %d\n", pt->tm_hour, pt->tm_min, pt->tm_sec);

  return 0;
}
