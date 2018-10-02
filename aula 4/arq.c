#include <stdio.h>
#include <stdlib.h>


int main(){
    char nome_arq[128];
    
    printf("entre o nome do arquivo a ser criado> ");
    scanf("%s", &nome_arq);
    
   FILE *arq =fopen(nome_arq,"r");
   
   fprintf( arq,"ola mundo!\n");
   
   fclose(arq);
   return 0;
