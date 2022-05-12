#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
int main()
{
int ret,t,cnt=0;
errno=0;
ret=nice(1); //nice() used to assign nice values to particular process
if(ret == -1 && errno !=0)
perror("nice");

else
printf("nice value is now %d \n",ret);
while(1){
printf("process with nice value %d count =%d\n",ret,cnt);
cnt++;
}
}
