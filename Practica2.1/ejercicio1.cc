#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    int r=setuid(0);
    if(r==-1){
        printf("Error");
        perror("Causa:");
    }
    else {
        printf("Correcto");
    }
    return 0;
}