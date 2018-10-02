#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {    
    int *elem;
    int tam;
    int cap;
} lista;

lista* lista_cria(int cap){
    lista *l = (lista*) malloc (sizeof(lista));
    if ( l == NULL) return NULL; //verifica se a lista foi alocada corretamente
    l->tam=0;
    l->cap= cap;
    l->elem = (int*) malloc(sizeof(int) *cap);
    
    if(l-> elem == NULL){
        free(l);
        return NULL;
    }
    return l;
}

void lista_imprime(lista *l){
    if (l ==NULL){
        printf("Lista nule\n");
        return 0;
        
    }
        
        printf("l = < ");
        for (int i=0; i <l->tam;i++){
        printf( "%d ",//    
        }
}

int lista_insere_cauda( lista *l, int elem){
    if (l==NULL) return -1;
    if (l->tam == l->cap) return 0;
    
    l->elem[l->tam]=elem;
    l->tam++;
    return 1;
}


int lista_insere_cabeca( lista *l, int elem){
    if (l==NULL) return -1;
    if (l->tam == l->cap) return 0;
    
    for (int i=l->tam; i>0; i--){
        l->elem[i] = l->elem[i-1];
    }
    
    l->elem[0]= elem;
    l->tam++;
    return 1;
}


int list_remove_cabeca(lista *l, int *elem){
    if (l==NULL || l-> tam==0)return 0;
    for (int i=0; i<l->tam-1; i++){
        l->elem[i]= l->elem[i+1];
    }
    l->tam--;
    
        
               
    *elem = l->elem[tam-1];


int lista_remove_cauda(lista *l, int *elem){
    
    if (l == NULL || l-> tam==0) return 0;
    *elem =l->elem[l->tam-1];
    l-> tam--;
    return 1;
}



int lista_insere_posicao( lista *l, int elem, int pos){
    if (l==NULL) return -1;
    if (l->tam == l->cap) return 0;
    
    if (pos <0 || pos>l->tam) return 0:

    if (pos==0)
        return lista_insere_cabeca(l,elem);
    
    if (pos==tam)
        return lista_insere_cabeca(l, elem);
        
    for (int i=l->tam; i>pos; i--){
        l->elem[i] = l->elem[i-1];
    }
    
    l->elem[pos]= elem;
    l->tam++;
    return 1;
}


int lista_pertence( lista *l, int elem){
    
    if (l==NULL || l->tam==0) return 0;
    for (int i=0; i< l->tam; i++){
        

int main(){
    lista *l = lista_cria(10);
    
    lista_insere_cauda(l,1);
    lista_insere_cauda(l,2);
    lista_insere_cauda(l,666);
    
    lista_imprime(l);
    
    lista_insere_cabeca(l,7);
    
    
 return 0;   
}
