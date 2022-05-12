

#include<stdio.h>
#include<unistd.h>
int main(void)
{
int pid_1;

printf("current process id==%d\n",getpid());
pid_1=fork();//vfork

if(pid_1==0)//if(pid)
{
printf("new child pid==%d\n",getpid());
printf("new child parent pid==%d\n",getppid());


}
else
{
printf("parent pid==%d\n",getpid());
printf("parents parent pid==%d\n",getppid());

}
while(1);
return 0;

}
