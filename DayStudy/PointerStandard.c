/*
DataType : Value -> address
* : adress-> Value
& : Value -> adress
*/

/*
//Check memory address
#include <stdio.h>

int main(void)
{
    int a;     //int parameter
    double b;    //double parameter
    char c;     //char parameter

    printf("int parameter address : %u\n", &a);    //use &
    printf("double parameter address : %u\n", &b);
    printf("char parameter address : %u\n", &c);

    return 0;
}
*/

/*
//Use pointer, Dereference operator
#include <stdio.h>

int main(void)
{
    int a;    //parameter
    int *pa;    //pointer parameter

    pa=&a;    //Assignment "pa" pointer as "a" address
    *pa=10;

    printf("pointer a value : %d\n", *pa);
    printf("parameter a value : %d\n", a);

    return 0; 
}
*/

/*
//Calculate integers plus and average using pointer.
#include <stdio.h>

int main(void)
{
    int a=10, b=15, total;
    double avg;    //average parameter.
    int *pa, *pb;    //pointer parameters.
    int *pt=&total;
    double *pg=&avg;

    pa=&a;
    pb=&b;

    *pt=*pa+*pb;
    *pg=*pt/2.0;

    printf("Integers value : %d, %d\n", *pa, *pb);
    printf("Two integers total : %d\n", *pt);
    printf("Two integers average : %.11f\n", *pg);

    return 0;
}
*/


//Use pointer const
#include <stdio.h>

int main(void)
{
    int a=10, b=20;
    const int *pa=&a;    //pa=10

    printf("parameter a value : %d\n", *pa);
    pa=&b;    //pa<=b, can't change *pa using Dereference operator
    printf("parameter b value : %d\n", *pa);    //*pa=20
    pa=&a;    //pa=10=a
    a=20;
    printf("parameter a value : %d\n", *pa);    //*pa=20

    return 0;
}
