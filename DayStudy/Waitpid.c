#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(int argc, char *argv[])
{
    int status;
    pid_t pid=fork();    //create process

    if(pid==0)
    {
        sleep(15);    //Delay to 15 sec.
        return 24;
    }
    else 
    {
        while(!waitpid(-1, &status, WNOHANG))    //Calling waitpid function and passing by WNOHANG
                                                 //Value return to 0, When ended child process.
        {
            sleep(3);
            puts("sleep 3sec.");
        }

        if(WIFEXITED(status))
            printf("Child send %d \n", WEXITSTATUS(status));
    }
    return 0;
}
