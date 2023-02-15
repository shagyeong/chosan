/* 디렉터리 이동 2(fchdir(2)) */
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main(void){
    char* cwd;
    int fd;

    cwd = getcwd(NULL, BUFSIZ);
    printf("current working directory : %s\n", cwd);

    fd = open("test", O_RDONLY);
    fchdir(fd);

    cwd = getcwd(NULL, BUFSIZ);
    printf("current working directory : %s\n", cwd);

    close(fd);
    free(cwd);

    exit(0);
}