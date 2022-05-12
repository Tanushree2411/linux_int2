
#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main()
{
int fd,fd1,total;
char buf[260];
fd=open("write_fd.c",O_CREAT | O_RDWR, 777);
printf("%d\n",fd);
if(fd<0)
printf("file not open or cretred");
read(fd,buf,260);
total=lseek(fd1,0,SEEK_END);

fd1=open("output1.txt",O_CREAT | O_RDWR, 777);
write(fd1,buf,total);
close(fd1);
return 0;
}
