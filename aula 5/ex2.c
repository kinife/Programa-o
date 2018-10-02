#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma_vet(int v[], int t){
    int soma=0, a=t;
    if (t==0){
        return 0;
    }
    
    return v[t-1]+ soma_vet(v,t-1);   
}
int main(){
    int vetor[5]= {3,6,6,6,0};
    printf("a soma: %d\n", soma_vet(vetor,5));
    
    
return 0;

}
