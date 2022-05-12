#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
int ret = execl("ass_process1.c","",0);
if(ret == -1){
printf("execl returned error %d\n", ret);
}
}
