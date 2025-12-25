#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<errno.h>

int main()
{
    int fd = 0;
    char fName[50];
    
    printf("Enter file name: \n");
    scanf("%s", fName);

    fd = open(fName, O_RDWR);

    if(fd == -1)
    {
        perror("Couldn't create/open file\n");
        return -1;
    }
    
    printf("File successfully opened.\n");
    printf("File descriptor: %d\n", fd);

    close(fd);

    return 0;
}
