//DoublePointer

#include<stdio.h>

void swap_ptr(char **ppa, char **ppb);
void swap_inte(int **ppc, int **ppd);

int main(void)
{
    char *pa="success";    //Constructure like a char array.
    char *pb="failure";

    printf("pa -> %s, pb-> %s\n", pa, pb); 
    swap_ptr(&pa, &pb);    //Address send, because need to another "method parameter".
    printf("pa -> %s, pb-> %s\n", pa, pb);
    
    int *pc=13;
    int *pd=33;

    printf("pc -> %d, pd-> %d\n", pc, pd);
    swap_inte(&pc, &pd);
    printf("pc -> %d, pd-> %d\n", pc, pd);

    return 0;
}

void swap_ptr(char **ppa, char **ppb)    //need pointers pointer
{
    char *pt;    //Need a just pointer.
    pt=*ppa;    //So just *ppa not **ppa.
    *ppa=*ppb;
    *ppb=pt;
}

void swap_inte(int **ppc, int **ppd)
{
    int *temp;
    temp=*ppc;
    *ppc=*ppd;
    *ppd=temp;
}
