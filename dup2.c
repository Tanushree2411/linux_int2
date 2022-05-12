
#include<stdio.h>
#include<fcntl.h>
int main()
{
int fd1,fd2,fd3,fd4;
fd1=open("linux.txt",O_WRONLY | O_CREAT | O_TRUNC,0777);
fd2=open("linuxnew.txt",O_WRONLY|O_CREAT|O_TRUNC,0777);
printf("fd1=%d",fd1);
printf("fd2=%d",fd2);
fd3=dup2(fd1,44);
printf("fd3 = %d",fd3);
return 0;
}
