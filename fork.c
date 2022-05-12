#include<stdio.h>
#include<unistd.h>
int main(void)
{
int pid_i,pid;
printf("current process =%d",getpid());
pid_i=vfork();
if(pid)
{
//sleep(3);
printf("new child id is %d",getpid());
printf("new parent process ppid is %d",getppid());
}
else
{
//sleep(3);
printf("parent process pid is %d",getpid());
printf("parents parent process id is %d",getppid());//bash
}
//while(1);
return 0;
}
