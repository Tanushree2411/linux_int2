#include<stdio.h>
#include<fcntl.h>
int main()
{
int fd1,fd2,fd3,fd4;
fd1=open("linux.txt",O_WRONLY | O_CREAT | O_TRUNC,0777);
fd3=fcntl(fd1,F_DUPFD,35);
printf("fd3  is %d",fd3);
return 0;
}
