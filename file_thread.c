#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void *th_fun(void *p);
int fd;
int main()
{
pthread_t t1,t2;
fd=open("/etc/passwd",O_RDONLY);
printf("file opened with fd %d",fd);
pthread_create(&t1,NULL,th_fun,"thread one");
pthread_create(&t2,NULL,th_fun,"thread two");
pthread_join(t1,NULL);
pthread_join(t2,NULL);
}
void *th_fun(void *p)
{
char * str,buf[100];
int n,pid;
str=(char *)p;
pid=getpid();
printf("%s started now for process: %d",str,pid);
do
{
n=read(fd,buf,100);
printf("%s read %d",str,pid);
printf("\n....\n");
write(1,buf,n);
printf("\n..\n");
sleep(3);
}

while(n);
printf("doneeee");
}


