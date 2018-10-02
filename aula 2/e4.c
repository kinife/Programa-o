#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void foo(int bar){
    printf("%d ",bar);
    bar = 10;
    printf("%d ", bar);
}

int main(){
    
    int x = 1;
    printf("%d ",x );
    foo (x);
    printf("%d \n",x);
    return 0;
    
}
