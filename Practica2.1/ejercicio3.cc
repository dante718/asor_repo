#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

int main(){
    for(int i =0;i<255;i++){
        printf("Error :%a\n",strerror(i),i);
        return 0;
    }
}