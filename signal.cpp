#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void abc(int x){
printf("you pressed ctrl+c\n");
}
int main(){
signal(SIGINT,abc);
for(;;){
	printf("in for loop\n");
	usleep(1000000);
}
}
