#include<stdio.h>
#include <sys/types.h>
#include<stdlib.h>
#include <unistd.h>
int main()
{
	int pid=0; 
	pid=fork();
	if(pid>0)
	{
	printf("in parent process");
	}
	else if (pid == 0)
	{
		sleep(10);
		printf("in child process");
	}
	return 0;
}
