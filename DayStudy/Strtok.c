#include <stdio.h>
#include <string.h>

#define BUF_SIZE 100
#define ARR_CNT 5

int main(int argc, char *argv[])
{
	char *pToken;
	char *pArray[ARR_CNT]={0}; 
	int i=0;
	char arge[BUF_SIZE];

	if(argc!=2)
	{
		printf("Usage : %s SENSOR@<temputure>@<moisture>@<brightness>\n", argv[0]);
		exit(1);
	}
		strcpy(arge,argv[1]);

   		pToken = strtok(arge,"[@]");
		while(pToken != NULL)
		{
			pArray[i] =  pToken;
			if(i++ >= ARR_CNT)
				break;
			pToken = strtok(NULL,"[@]");
		}
  
		printf("Temp:%s, MOIS:%s, Brit:%s\n",pArray[1],pArray[2],pArray[3]);
}
