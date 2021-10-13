#include <stdio.h>
#include <unistd.h>

int main(){

    int pid = fork();
    if (pid == 0){
        printf("Soy el proceso Hijo; pid =%d\n",pid);
    }
    else{
        printf("Soy el proceso Padre; pid =%d\n",pid);
    }
    return 0;
}