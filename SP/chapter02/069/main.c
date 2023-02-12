/* 현재 작업 디렉터리의 위치 검색(getcwd(3)) */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void){
    /* current working directory */
    char* cwd;
    char wd1[BUFSIZ];
    char wd2[10];

    getcwd(wd1, BUFSIZ);
    printf("wd1 = %s\n", wd1);

    cwd = getcwd(NULL, BUFSIZ);
    printf("cwd1 = %s\n", cwd);
    free(cwd);

    cwd = getcwd(NULL, 0);
    printf("cwd2 = %s\n", cwd);
    free(cwd);

    if(getcwd(wd2, 10) == NULL){
        perror("getcwd");
        exit(1);
    }

    exit(0);
}