#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
    const char PATH[]="/Home/Downloads/Practica2.2/eje5.txt";
    int df= open(PATH, O_CREAT ,0645);
    printf("Descriptor = %i\n",df);
    return 0;
}
