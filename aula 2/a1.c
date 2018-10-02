#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int *ptri=NULL;
    
    ptri=&i;
    printf("um numero: \n");
    scanf ("%d",&i);
    printf("o valor digitado foi %d\n", *ptri);
    *ptri=567;
    printf("o valor novo é: %d\n",i);
    printf("o endereço é %p %p %p\n", &ptri,ptri,&i);


}
