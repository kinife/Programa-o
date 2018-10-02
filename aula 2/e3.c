#include <stdio.h>
#include <stdlib.h>


int main(){

    int a =7;
    
    int *p1 = &a;
    
    int **p2 = &p1;
    
    int ***px = &p2;
    
    printf(" End : %p\n", &a);
    
    printf(" End : %p\n", **px);
    
    printf(" End : %p\n", p1);
    
    printf(" End : %p\n", *p2);
    
    printf("%d %d %d %d \n", a, *p1, **p2, ***px);
    
    return 0;
}
