#include<stdio.h>
#include<unistd.h>  (fork)
#include<sys/types.h>  (data types: pid_t)
int main()
{
	pid_t  pid;
	printf("Hello");
	pid =fork();
	if(pid<0){
		printf("ERROR: child not created");}
	else if(pid==0) {
		printf("I am child process=%d" , pid);}
	else {
		 printf("I am parent process=%d",pid );}
}
