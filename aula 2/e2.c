#include <stdio.h>

int main(){

    int a =7;
    printf("tam int: %zu\n", sizeof(int));
    
    printf("tam variavel a: %zu\n", sizeof(a));
    
    
    int vetor[10];
    printf("tam vetor: %zu\n", sizeof(vetor));
    printf("tam vetor / tam int  -->  (qtde de posicoes no vetor): %zu\n", sizeof(vetor)/sizeof(int));
    
    
    return 0;
}
