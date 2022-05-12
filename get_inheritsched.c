#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

void* proc(void* param)
{
sleep(3);
return 0;
}

int main(int argc,char *argv[])
{
pthread_attr_t Attr;
pthread_t id;
int err,info;
pthread_attr_init(&Attr);
pthread_attr_getinheritsched(&Attr,&info);
switch(info)
{
case PTHREAD_INHERIT_SCHED:
printf("\n sched");
break;

case PTHREAD_EXPLICIT_SCHED:
printf("\n explicit\n");
break;
}
pthread_create(&id,&Attr,proc,NULL);
return 0;
}
