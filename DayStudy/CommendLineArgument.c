#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void print_str(char **);

int main(int argc, char **argv)
{
    char temp[80];
    char **str;    //pointer dynamic allocation
    int max;
    int i;
    
    max=atoi(argv[1]);
    
    str=(char **)malloc((max+1)* sizeof(char *));    //포인터 배열의 동적 할당
    i=0;

    while(1)
    {
        printf("input string : ");
        gets(temp);
        if(temp[0]=='\0')break;

        str[i]=(char *)malloc(strlen(temp)+1);
        strcpy(str[i], temp);
        i++;
        if(i==max)
        {
            printf("Full over String maximum size! \n");
            break;
        }
    }
    str[i]=0;
    print_str(str);

    i=0;
    while(str[i]!=0)
    {
        free(str[i]);
        i++;
    }
    free(str);
    return 0;
}

void print_str(char **ps)
{
    while (*ps !=0)
    {
        printf("%s\n", *ps);
        ps++;
    }   
}
