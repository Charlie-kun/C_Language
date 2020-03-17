#include <stdio.h>

int main(void) 
{
  /*
  int a=10;
  int *p=&a;    //int tpye parameter pointer
  double *pd;    //double type parameter pointer

  pd=p;    //Don't use this pointer type, because differnt tpye.
  printf("%lf\n", *pd);
  */

  double a=3.4;
  double *pd=&a;
  int *pi;
  pi=(int *)pd;   //Possible to casting.

  printf("%.2f\n", a);
  printf("%lf\n", &a);    //&a=>*pd=3.4
  printf("%lf\n", pi);    //(casting)*pd=3.4


  return 0;
}
