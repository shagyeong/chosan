#include<stdio.h>
#include<unistd.h>

int main(int argc, char* argv){
    int n;
    extern char* optarg; /* 옵션 타겟*/
    extern int optind; /* 옵션 인덱스 */

    printf("current optind : %d\n", optind);
    
}