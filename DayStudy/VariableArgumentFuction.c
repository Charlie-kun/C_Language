#include <stdio.h>
#include <stdarg.h>  //VariableArgumentFuction head

double my_sum(const char *formet, ...);

int main(void) 
{
 //Variable argument function
 double res;

 res=my_sum("ddff", 1,2,3.0 ,4.5);
 printf("res : %.1lf\n", res);

  return 0;
}

double my_sum(const char *format, ...)
{
  va_list pa;    //Variable argument start point
  double tot=0;
  va_start(pa, format);    //Next point out about 'pa' point 
  while(*format)
  {
    if(*format =='d')
    {
      tot+=va_arg(pa, int);
    }
    else if(*format =='f')
    {
      tot +=va_arg(pa, double);
    }
    format++;
  }
  va_end(pa);

  return tot;
}
