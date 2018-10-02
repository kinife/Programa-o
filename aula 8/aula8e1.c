/*
##### listas encadeadas
armazena valor e endereço do proximo elemento.

##### listas duplamente encadeadas
armazena valor, endereço do proximo elemento e anterior.


estrutura linear de nós encadeados
cada nó possui dois ponteiros
 um ponteiro para o dado
 um ponteiro para o proximo
no é definido por struct
o último elemento (nó) sempre aponta para NULL

duplamente encadeado tem 3 ponteiros
dado
primeiro
ultimo


inserção na cabeça
1 aloca-se o novo no
2 insere o dado
3 proximo de novo nó
    aponta para o primeiro da lista
4 primeiro da lista
    aponta para o novo nó
DESENHO

inserçao na cauda
1 aloca novo no
2 insere o dado
3 proximo de novo no
    aponta para NULL
4 proximo do antigo ultimo
    aponta para o novo no
DESENHO

perguntas para se fazer quando for inserir
->e se a lista está vazia?
perguntas para se fazer quando for remover
-> e se tiver so um elemento

listas simplesmente encadeadas
inserção
caminha até o no anterior do ponto de inserção
cria novo no que armazena o elemento
altera os ponteiros para incluir o no na lista... slide
DESENHO

remoção
pode ocorrer no inicio fim ou em qualquer posiçao da lista
1 caminhar até o no anterior daquele que sera removido
    chama esse no de atual
2 guardar o endereço do proximo no apontado por atual
    este é o no que sera removido
3 setar o proximo do atual para o proximo do removido
    o no é removido do encadeamento
4 decrementar o numero de elementos da lista

listas duplamente encadeadas
agora com 3 ponmteiros
dado, anterior e proximo

ver slide da aula, ultimos slides, implementação de operaçoes com nos + inserção/remoção cabeça/cauda;



*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef int elem_t;

typedef struct node{
    elem_t *dado;
    struct node *prox;
} node_t;
    
typedef struct lista{
     node_t *prim;
     int nelem;
} lista_t;

//cria lista
lista_t* lista_cria (){
    lista_t *lista = (lista_t*) malloc (sizeof(lista_t));
    if (lista == NULL) return NULL; //verificação se a lista é nula antes da atribuição
    lista -> nelem = 0;
    lista -> prim = NULL;
    return lista;
}

//inserção em cabeça
int lista_insere_cabeca( lista_t *l, elem_t *dado){
        if (!l) return 0;
        node_t *novo_no = (node_t*) malloc(sizeof(node_t));
        if (!novo_no ) return 0;
        novo_no->dado = dado;
        novo_no->prox = l->prim;
        l->prim = novo_no;
        l->nelem++;
        return 1;
}

//inserção em cauda
int lista_insere_cauda( lista_t *l, elem_t *dado){
        if (!l) return 0;
        if (l->prim==NULL) return lista_insere_cabeca(l,dado);//verificação para nao dar falha de segmentação na inserçao
        node_t *novo_no = (node_t*) malloc(sizeof(node_t));
        if (!novo_no ) return 0;
        novo_no->dado = dado;
        novo_no->prox = NULL;
        
        node_t *aux = l->prim; //ponteiro auxiliar para percorrer a lista(n precisa desalocar porque n alocou memoria nenhuma)
        
        while(aux->prox != NULL)
            aux = aux->prox;
        aux->prox = novo_no;
        l->nelem++;
        return 1;
        
}

void remove_no( lista_t *l, node_t *rem){
        if (!l || !rem || l->nelem == 0) return;
        if (rem == l->prim){
            l->prim=rem->prox;
        }
        else{
            node_t *aux = l->prim;
            while (aux->prox != rem)
                aux = aux->prox;
                aux->prox = rem -> prox;
        }
        free(rem->dado);
        free(rem);
        l->nelem--;
}

void imprime_rec(node_t *no){
    if (no == NULL) return;
    //imprime_rec(no->prox); (imprime ao contrario)
    printf("%d ",*(no->dado));
    imprime_rec(no->prox);
}
        


void lista_imprime(lista_t *l){
        if (l ==NULL){
            printf("Lista nao inicializada\n");
        }
        else{
            printf("L = <");
            imprime_rec(l->prim);
            printf(">\n");
        }
        
}

void lista_imprime_iter(lista_t *l){
    if (l==NULL){
        printf("lista nao inicializada");
    }
    else{
        printf("L=< ");
        imprime_rec(l->prim);
        
        while (aux!=NULL){
            printf("%d ", (*aux->dado));
            aux=aux->prox;
        }
        printf(">\n");
    }
}


int main(){
        lista_t *l = lista_cria();
        int vet[6] = {1,5,666,3,4,2};
        lista_insere_cauda(l,&vet[2]);
        lista_insere_cauda(l,&vet[0]);
        lista_insere_cauda(l,&vet[5]);
        
        lista_imprime(l);
    
    
    return 0;
}
