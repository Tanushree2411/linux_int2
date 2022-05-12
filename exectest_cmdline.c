int main(int argc,char *argv[]) //argc count num of args //argv stores all paramters
{
int i;
printf("file nsme %s",argv[0]);//a.out
printf("total no of args = %d",argc);
printf("args passed");
for(i=1;i<argc;i++)
printf("%s",argv[i]);
}


