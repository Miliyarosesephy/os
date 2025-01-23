#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<fcntl.h>
int main()
{
int f1,f2;
char wbuf[128];
char rbuf[128];
f1=open("file.txt",O_RDWR);
printf("Enter the text to be written:");
scanf("%s",wbuf);
write(f1,wbuf,strlen(wbuf));
close(f1);
f2=open("file.txt",O_RDWR);
printf("The contents are:");
read(f2,rbuf,100);
printf("%s",rbuf);
close(f2);
return 0;
}

