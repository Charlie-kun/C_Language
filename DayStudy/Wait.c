#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(int argc, char *argv[])
{
    int status;
    pid_t pid=fork();    //born child process

    if(pid==0)
    {
        return 3;    //end of child process
    }
    else
    {
        printf("Child PID : %d \n", pid);
        pid=fork();    //born child process(2)
        if(pid==0)
        {
            exit(7);    //end of child process(2)
        }
        else
        {
            printf("Child PID : %d \n", pid);
            wait(&status);    //Calling wait function.
            if(WIFEXITED(status))    //Macro function WIFEXITED
                printf("Child send one : %d \n", WEXITSTATUS(status));   //When standard process ended. print WIFEXITED 

            wait(&status);
            if(WIFEXITED(status))    //Calling wait function again.
                printf("Child send two : %d \n", WEXITSTATUS(status));
            sleep(30);  //Sleep 30 sec.
        }
    }
    return 0;
    
}
