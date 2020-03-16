#include <stdio.h>

int main(void) 
{
  char ch;
  int in;
  double db;

  char *pc =&ch;
  int *pi=&in;
  double*pd=&db;

  printf("char type parameter address size : %lu\n", sizeof(&ch));
  printf("int type parameter address size : %lu\n", sizeof(&in));
  printf("double type parameter address size : %lu\n", sizeof(&db));

  printf("char * pointer size : %lu\n", sizeof(pc));
  printf("int * pointer size : %lu\n", sizeof(pi));
  printf("double * pointer size : %lu\n", sizeof(pd));

  printf("char * pointer register parameter size : %lu\n", sizeof(*pc));
  printf("int * pointer register parameter size : %lu\n", sizeof(*pi));
  printf("double * pointer register parameter size : %lu\n", sizeof(*pd));

  return 0;
}
