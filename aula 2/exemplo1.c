#include <stdio.h>

int main(){

    int a =7;
    int *ptr = NULL;
    
    if (!ptr) printf("o ponteiro e nulo!\n");
        
    ptr = &a;
    
    if (ptr) printf("o ponteiro nao e nulo\n");
        
    printf("%d %d \n", a ,*ptr);
    
    return 0;
}

