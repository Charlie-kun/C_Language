/*
Array-Pointer relationship
address+integer -> address + (integer * parameter address size)
*/

/*
#include<stdio.h>

int main(void)
{
    int ary[3];
    int i;

    *(ary+0)=10;    //ary[0]=10
    *(ary+1)=*(ary+0)+10;    //ary[1]=ary[0]+10

    printf("Array 3rd parameter input : ");
    scanf("%d", ary+2);    //&ary[2]

    for(i=0;i<3;i++)
    {
        printf("%5d \n", *(ary+i));    //ary[i]
    }

    return 0;
}
*/

// Pointer use like Array name

#include<stdio.h>

int main(void)
{
    int ary[3];    //array
    int *pa=ary;
    int i;

    *pa=10;
    *(pa+1)=20;
    pa[2]=pa[0]+pa[1];

    for(i=0;i<3;i++)
    {
        printf("%5d", pa[i]);
    }

    return 0;
}
