#include<unistd.h>
#include<stdio.h>
int main()
{
pid_t pid;
pid=fork();
if(pid<0)
{
fprintf("stderr","fork failed");
exit(-1);
}
else if(pid==0)
{
execl("/bin/ls","ls",NULL);
}
else
{
wait(NULL);//parent process
printf("child complete");
exit(0);
}
}
