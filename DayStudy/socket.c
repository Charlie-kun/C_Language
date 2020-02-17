#include<stdio.h>
#include<sys/socket.h>

//check man socket

int main(void)
{
    int serverSocket;
    int type=SOCK_STREAM;    //continuty data flow
    int domain=PF_INET;    //Internal key-Management function
    int protocol=0;

    serverSocket=socket(domain, type, protocol);

    if(serverSocket==-1)
    {
        printf("Server connnected fail!\n");
    }
    else
    {
        printf("Server connected success!\n");
    }
    

}