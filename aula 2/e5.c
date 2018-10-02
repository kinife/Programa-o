#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void foo(int *bar){
    *bar = 5;
}

int main(){
    
    int x = 1;
    printf("%d \n",x );
    foo (&x);
    printf("%d \n",x);
    return 0;
    
}
