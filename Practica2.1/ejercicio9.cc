#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    printf("Usuario read: %i\n",getuid());
    printf("Usuario efectivo: %i\n",geteuid());
    return 0;
    
}