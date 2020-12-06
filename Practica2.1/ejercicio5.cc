#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/utsname.h>
#include <sys/types.h>
#include <errno.h>
#include <unistd.h>

int main(){
    int r;
    struct utsname u;
    r=uname(&u);
    if(r==0){
        printf("system name: %s\n",u.sysname);
        printf("node name: %s\n",u.nodename);
        printf("system release: %s\n",u.release);
        printf("system version: %s\n",u.version);
        printf("hardware id: %s\n",u.machine);

    }
    else{
        printf("Error:%s\n",errno,strerror(errno));
    }
    return 0;
    
}