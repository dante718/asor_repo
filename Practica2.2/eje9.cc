#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/sysmacros.h>
#include <time.h>

int main(int argc, char **argv){
    if(arg<2){
        printf("ERROR: no hay suficiente parametro.\n");
        return 0;
    }
    
    struct stat buff;
    int statint = stat(argv[1],&buff);
    if(statint==-1){
        printf("ERROR: no existe directorio.\n");
        return 0;
    }

    printf("MAJOR: %li\n",(long)major(buff.st_dev));
    printf("MINOR: %li\n",(long)minor(buff.st_dev));
    printf("I_NODE: %li\n",buff.st_ino);
    printf("MODE: %i\n",buff.st_mode);

    mode_t mode=buff.st_mode;

    if(S_ISLINK(mode)){
        printf("%s es un enlace simbólico.\n",argv[1]);
    } else if (S_ISREG(mode)) {
		printf("%s es un archivo ordinario.\n", argv[1]);
	} else if (S_ISDIR(mode)) {
		printf("%s es un directorio.\n", argv[1]);
	}

    time_t t = buff.st_atime;
    struct tm *tm1= localtime(&t);
	printf("ultimo acceso (A): %d:%d\n", tm1->tm_hour, tm1->tm_min);

    time_t t2=buff.st_mtime;

    struct tm *tm2= localtime(&t2);

	printf("Últime acceso (M): %d:%d\n", tm2->tm_hour, tm2->tm_min);

	time_t t3 = buff.st_ctime;
	
	struct tm *tm3= localtime(&t3);

	printf("Últime acceso (C): %d:%d\n", tm3->tm_hour, tm3->tm_min);

	return 0;

}