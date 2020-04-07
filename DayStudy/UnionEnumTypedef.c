//UnionEnumTypedef.c
/*
#include<stdio.h>

union student
{
    int num;
    double grade;
};

int main(void)
{
    union student s1={315};    //initialize union parameta

    printf("student number : %d\n", s1.num);    //Use s1.num
    s1.grade=4.4;
    printf("Score : %.1lf\n", s1.grade);     //overwrite s1.num
    printf("student number : %d\n", s1.num);     //remain just trash value.

    return 0;
}
*/
/*
#include<stdio.h>
enum season{SPRING, SUMMER, FALL, WINTTER};

int main(void)
{
    enum season ss;    //Enum parameter
    char *pc;

    ss=SPRING;
    switch (ss)
    {
    case SPRING:
        pc="inline"; break;
    case SUMMER:
        pc="swimming"; break;
    case FALL:
        pc="trip"; break;
    case WINTTER:
        pc="skiing"; break;
    }
    printf("my leisure activity => %s\n", pc);

    return 0;
}
*/

#include<stdio.h>

typedef union 
{
    int ea;
    double kg;
    double liter;
}Unit;

typedef struct 
{
    char name[20];
    enum{EGG=1, MILK, MEAT} kind;
    Unit amount;
}Gift;

void print_list(Gift a);

int main(void)
{
    Gift list[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("Name select : ");
        scanf("%s", list[i].name);
        printf("Select product list(1. egg, 2.Milk, 3. meat) : ");
        scanf("%d", &list[i].kind);

        switch(list[i].kind)
        {
            case EGG : list[i].amount.ea=30; break;
            case MILK : list[i].amount.liter=4.5; break;
            case MEAT : list[i].amount.kg=0.6; break;
        }
    }
    printf("# 3rd Prize winner...\n");
    print_list(list[2]);

    return 0;
}

void print_list(Gift a)
{
    printf("Name : %s, select product list : ", a.name);

    switch (a.kind)
    {
    case EGG : printf("Egg %d ea\n", a.amount.ea); break;
    case MILK : printf("Milk %.1f liter\n", a.amount.liter); break;
    case MEAT : printf("Meat %.1f kg\n", a.amount.kg); break;
    
    }
}
