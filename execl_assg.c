

#include <stdio.h> 
int main(int argc,char *argv[]) 
{ 
 execl("/bin/ls",argv[0],argv[1], NULL); 
 return 0; 
} 

