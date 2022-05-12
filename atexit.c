#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>


void callback1()
{
printf("callback1 fun called\n");
}

void callback2()
{
printf("callback2 fun called\n");
}

void callback3()
{
printf("callback3 fun called\n");
}
int main()
{
printf("registering callback1\n");
atexit(callback1);//regs fun callabck1 with kernel
printf("registering callback2\n");
atexit(callback2);//regs fun callabck1 with kernel
printf("registering callback3\n");
atexit(callback3);//regs fun callabck1 with kernel
printf("main() exiting now\n");
exit(0); //_exit(0) will not call fun which are previosuly registerd by atexit fun
}

