#include <stdio.h>
#include <stdlib.h>

int** aloca_matriz(int nl, int nc){
        int **m;
        m=(int**) malloc(sizeof(int*) * nl);
        
        for (int=0; i<nc; i++){
            m[i] = (int*) malloc(sizeof(int) * nc);
        }
        return m;
    
}

void preenche_matriz(int **m, int nl, int nc){

        for (int i=0; i<nl; i++)
            for (int j=0;j<nc; j++)
                  scanf("%d", &m);
}



void desaloca_matriz(int ***m, int nl){
        
        for (int=0; i<nl; i++){
            free((*m)[i]));
        }
        
        free(*m);
        *m=NULL;
}

int main(){
    void (*fcs[2])(int**, int, int) ={preenche_matriz, imprime_matriz);
   int ** matriz =  aloca_matriz(3,3);
   int opcao=666;
   do {
       printf("0- ler matriz\n");
       printf("1- imprimir matriz\n");
       printf("666 sair\n");
       printf("entre uma funcao: ");
       scanf("%d\n", &opcao);
         
   
   desaloca_matriz(&matriz,3);
    
    if (!matriz)
        printf("o ponteiro e nulo");
    return 0;
}
