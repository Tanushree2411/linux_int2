#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#define num_thread 3
int i=0;
void *myfun(void *null)
{
i++;
int result=0;
result=result + i*1000;
printf("result = %d\n",result);
pthread_exit(NULL);
}

int main(int argc,char *argv[])
{
pthread_t thread[num_thread];
pthread_attr_t attr;
int rc,t,status,detach_state;

pthread_attr_init(&attr);
pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_DETACHED);
for(i=0;i<num_thread;i++)
{
printf("creating thread %d\n",i);
pthread_create(&thread[i],&attr,myfun,NULL);
}

pthread_attr_getdetachstate(&attr,&detach_state);
printf("\n detach state %d\n",(int *)detach_state);

printf("\n exiting from main thread");
pthread_exit(NULL);
}
