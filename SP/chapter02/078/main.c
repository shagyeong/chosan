/* 디렉터리 열기, 닫기, 내용 읽기(opendir(3), closedir(3), readdir(3)) */
#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>

int main(void){
    DIR* dp;
    struct dirent* dent;
    dp = opendir(".");

    while((dent = readdir(dp))){
        printf("name : %s ", (*dent).d_name);
        printf("inode: %d\n", (int)(*dent).d_ino);
    }

    closedir(dp);
}