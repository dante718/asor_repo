#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>

int main(){
    struct passwd *estructura;
    printf("Usuario read: %i\n",getuid());
    printf("Usuario efectivo: %i\n",geteuid());
    estructura= getpwuid(getuid());
     printf("Nombre Usuario: %s\n",estructura->pw_name);
    printf("Directorio: %s\n",estructura->pw_dir);
     printf("Descripcion: %s\n",estructura->pw_gecos);
     return 0;
     
}
