#include<stdio.h>
#include<stdlib.h>
void buggy()
{
int *intptr;
int i;
intptr=(int *)malloc(sizeof(int)*5); //int data type=4 bytes
printf("malloc checling:addr=%08x and size=%d\n",intptr,sizeof(int)*5);
for(i=0;i<=4;i++)
{
*intptr=100;
printf("value at ptr intptr=%d\n",*(intptr));
intptr++;
}
}
int main()
{
buggy();
return 0;
}
