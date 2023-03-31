#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
    int fd;
    fd = open("/D:/PIGGI DRIVE",O_WRONLY|O_CREAT);
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