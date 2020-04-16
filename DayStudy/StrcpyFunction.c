//strcpy Function

#include<stdio.h>

char *my_strcpy(char *pd, char *ps);

int main(void)
{
    char str[80]="strawberry";

    printf("String before the change : %s\n", str);
    my_strcpy(str, "apple");
    printf("Stirng after the change : %s\n", str);
    printf("Input another string : %s\n", my_strcpy(str, "kiwi"));

    return 0;
}

char *my_strcpy(char *pd, char *ps)
{
    char *po=pd;

    while(*ps!='\0')
    {
        *pd=*ps;
        pd++;    //Received copied value next  position pointer increase.
        ps++;

    }

    *pd='\0';

    return po;
}
