#include<stdio.h>
#include<unistd.h>

int main()
{
int opt,stat;
pid_t pid;
while(1)
{

printf("enter 1 to exec ls in child process and 0 to exit");
scanf("%d",&opt);
if(!opt)
exit(0);
printf("\n");

if(fork()==0)
{
execl("/bin/ls", "ls",0);
exit(0);
}
}
}
