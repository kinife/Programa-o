#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void foo(int *bar){
    printf("*Bar: %d \n",*bar );
    *bar = 5;
    printf("*Bar: %d \n",*bar );
    printf("Bar (copia end px): %p \n",bar );
    bar = NULL;
    printf("Bar (copia end px): %p \n",bar );
}

int main(){
    
    int x = 1;
    int *px = &x;
    printf("Endereço de px: %p \n",px );
    printf("X: %d \n",x );
    foo (px);
    printf("X: %d \n",x);
    printf("Endereco de px: %p \n",px );
    return 0;
    
}
