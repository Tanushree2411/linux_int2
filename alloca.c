#include<stdio.h>
#include<string.h>
int main()
{

char *str1="linux";
char *str2="kernek";
char *name=(char*) alloca (strlen(str1) + strlen(str2) +1);
strcpy(strcpy(name,str1),str2);
printf("copied string data is %s\n",name);
return 0;
}
