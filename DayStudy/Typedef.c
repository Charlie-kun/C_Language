#include <stdio.h>

typedef union
{
  int ea;
  double kg;
  double liter;
} Unit;

typedef struct
{
  char name[20];
  enum{EGG=1,MILK,MEAT}kind;
  Unit amount;
}Gift;

void print_list(Gift a);

int main(void) 
{
  Gift list[5];
  int i;

   for(i=0;i<5;i++)
   {
     printf("input name : ");
     scanf("%s", list[i].name);
     printf("select product(1. egg, 2. milk, 3. meat) : ");
     scanf("%d", &list[i].kind);

     switch(list[i].kind)
     {
       case EGG:list[i].amount.ea=30;break;
       case MILK: list[i].amount.liter=4.5;break;
       case MEAT: list[i].amount.kg=0.6;break;
     }
   }

  printf("# 3rd prize winner...\n");
  print_list(list[2]);

  return 0;
}

void print_list(Gift a)
{
  printf("name : %s, Select product : ", a.name);

  switch(a.kind)
  {
    case EGG : printf("Egg %d ea\n", a.amount.ea); break;
    case MILK : printf("Milk %.1f liter\n", a.amount.liter); break;
    case MEAT : printf("Meat %.1f kg\n", a.amount.kg); break;
  }
}
