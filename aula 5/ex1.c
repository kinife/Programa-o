//exemplo 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//fibonacci


int fib_rec(int n){
    if(n<=2){
     return n-1;   
    }
    return fib_rec(n-1)+fib_rec(n-2);
}


int fib_itr(int n){
    if (n<=2) return n-1;
    int ant=0, atu=1;
    for (int i=3; i<=n; i++){
        int tmp = ant+atu;
        ant=atu;
        atu=tmp;
    }
    return atu;
}

int main(){
 int n,x;
 //printf("numero : ");
 //scanf("%d\n",&x);
    
 printf("%d\n", fib_itr(8));  
 return 0;   
}
