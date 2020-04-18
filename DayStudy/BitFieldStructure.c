#include <stdio.h>

struct children
{
  unsigned int son :2;
  unsigned int daughter :2;
  unsigned int pet :3;
};

int main(void) 
{
  struct children my={1,2,3};
  int sum;

  printf("struct children size : %lu byte\n", sizeof(my));
  sum=my.son+my.daughter+my.pet;
  printf("Total children numbber : %d\n", sum);
  return 0;
}
