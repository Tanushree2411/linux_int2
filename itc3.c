
#include<stdio.h> 
#include<fcntl.h> 
#include<sys/types.h> 
#include<sys/stat.h> 
#include<unistd.h>   
int main()
 {    
int fd;    
int len;   
 char read_buf[50];   
 fd = open("hello.txt", O_CREAT | O_RDWR,0777);    
  //lseek(fd,0,SEEK_SET); 
   //lseek(fd,6,SEEK_SET);   
 lseek(fd,-3,SEEK_END);   
 //lseek(fd,2,SEEK_CUR);   
 read(fd,read_buf,50);    
printf("The data from write buffer is: %s\n",read_buf);
close(fd);
return 0;
}
