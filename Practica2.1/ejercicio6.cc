#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(){
    long maximoarg=sysconf(_SC_ARG_MAX);
    long maximohijos=sysconf(_SC_CHILD_MAX);
    long maximoficheros=sysconf(_SC_CHILD_MAX);
    printf("Maximo de argumentos: %li\n",maximoarg);
    printf("Maximo de hijos: %li\n",maximohijos);
    printf("Maximo de ficheros: %li\n",maximoficheros);
    return 0;
}