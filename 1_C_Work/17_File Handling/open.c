#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
    int fd;
    fd = open("hello.txt",O_RDWR|O_CREAT);
    //char buff = "I Love you Piggi!";
    char buff1[15];
    printf("%d",fd);
    if(fd == -1)
    {
        printf("\nFile not found!!!!!");
    }
    else
    {
        printf("\nFile Created Succesfully");
    }
    //getchar();
    
    
    close(fd);
}