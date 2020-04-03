//Pointer Minus

#include<stdio.h>

int main(void)
{
    int ary[5]={10,20,30,40,50};
    int *pa=ary;
    int *pb=pa+3; 

    printf("pa : %u\n", pa);    //1st element address, ex) 3799911120
    printf("pb : %u\n", pb);    //4th element address, ex) 3799911132
    pa++;    //pa is 2nd element address. ex) 3799911124
    printf("pb-pa : %u\n", pb-pa);    //2, pointer - pointer = values gap/data type(int) size, (32-24)/4=2

    printf("Front array element value display : ");
    if(pa<pb) printf("%d\n", *pa);    //display this
    else printf("%d\n", *pb);

    return 0;
}
