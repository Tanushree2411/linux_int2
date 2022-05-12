
#include<stdio.h>
#include<unistd.h>
int main()
{
printf("on getting to execute an ls prog\n");
printf("hi\n");
execl("/bin/ls","ls","-lh",0);

printf("l executed is prog");
printf("l executed is prog");
printf("l executed is prog");
return 0;
}
