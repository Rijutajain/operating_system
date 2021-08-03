#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
int vid=fork();
if(vid==0){
	printf("first child process\n");
	usleep(60000000);
}
else{
	int cpid=wait(0);
	printf("child %d died\n",cpid);
	printf("parent\n");
}
return 0;
}
