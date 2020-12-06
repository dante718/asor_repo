#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(){
    long maximolink=sysconf(_PC_LINK_MAX);
    long maximopath=sysconf(_PC_PATH_MAX);
    long maximoNAME=sysconf(_PC_NAME_MAX);
    printf("Maximo de enlaces: %li\n",maximolink);
    printf("Tamaño maximo de ruta: %li\n",maximopath);
    printf("Tamaño maximo de nombre de ficheros: %li\n",maximoNAME);
    return 0;
}