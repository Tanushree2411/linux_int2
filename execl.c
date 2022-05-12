#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{

printf("hi\n");
printf("can you see me [ONE]");
execl("/home/tanushree/exectest_cmdline.c","exectest_cmdline.c","tanushree",NULL);
printf("can you see me [TWO]");



return 0;
} //if you dont find file in execl prog ,then process goes with 
