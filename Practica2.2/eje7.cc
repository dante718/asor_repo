#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
    const char PATH[]="/Home/Downloads/Practica2.2/eje5.txt";
    mode_t prev=umask(057);
    int df= open(PATH, O_CREAT | O_RDONLY,0777);
    printf("Descriptor = %i\n",df);
    return 0;
}
