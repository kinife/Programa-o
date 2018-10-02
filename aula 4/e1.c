#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arquivo;
    arquivo =  fopen("teste.txt","r");
    fseek(arquivo,0, SEEK_END);
    printf("o arquivo tem %lu bytes\n", ftell(arquivo));
        
    fclose(arquivo);    
return 0;
} 
