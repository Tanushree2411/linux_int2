#include<pthread.h>
#include<unistd.h>
#include<stdio.h>


void *thread()
{
pthread_detach(pthread_self());
printf("entered the thread");

}
main()
{
pthread_t p1;
pthread_create(&p1,NULL,thread,NULL);
printf("main executed\n");

pthread_exit(NULL); //stops executing main
printf("main executed again");
}


