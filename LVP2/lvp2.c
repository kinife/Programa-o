#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


/*
 * Abre o arquivo cujo nome eh recebido por parametro ("arquivo") para leitura.
 * Retorna um ponteiro para o arquivo aberto.
 */
FILE *abre_arquivo(const char *arquivo){
    FILE *abre=fopen("arquivo","r");
    return abre;
}

/*
 * Fecha o arquivo recebido por parametro.
 * Retorna 0 caso consiga fechar o arquivo, qualquer outro valor caso contrario.
 */
int fecha_arquivo(FILE *arq){
    return fclose(arq);
}

/*
 * Le os valores que estao dentro do "arquivo" e retorna um vetor contendo os valores.
 * Retorna dentro de "qtd_numeros" a quantidade de números existentes dentro do arquivo lido.
 * Caso não for possível ler o arquivo, "qtd_numeros" deve conter ZERO e retornar a constante NULL.
 * Se "qtd_numeros" for invalido, a leitura deve ser invalidade e retornar a constante NULL.
 */
double *le_valores(const char *arquivo, unsigned int *qtd_numeros);

/*
 * Essa função retorna o maior valor presente no array.
 * Caso for um array inválido, retorna a constante HUGE_VAL (em math.h)
 * */
double maior(double* valores, unsigned int qtd_numeros);

/*
 * Essa função retorna o menor valor presente no array.
 * Caso for um array inválido, retorna a constante HUGE_VAL (em math.h)
 * */
double menor(double* valores, unsigned int qtd_numeros);

/*
 * Essa função retorna a média dos valores presentes no array.
 * Caso for um array inválido, retorna a constante HUGE_VAL (em math.h)
 * */
double media(double* valores, unsigned int qtd_numeros);

/*
 * Essa função retorna o desvio padrão dos valores presentes no array.
 * Caso for um array inválido, retorna a constante HUGE_VAL (em math.h)
 * */
double desvio(double* valores, unsigned int qtd_numeros);

/*
 * Essa função retorna a amplitude(diferença entre o maior e o menor número) dos valores presentes no array.
 * Caso for um array inválido, retorna a constante HUGE_VAL (em math.h)
 * */
double amplitude(double* valores, unsigned int qtd_numeros);

/*
 * Essa função retorna o valor que está localizado em uma "posicao" do array.
 * Caso for um array inválido, retorna a constante HUGE_VAL (em math.h).
 * Caso for posição invalida, retorna a constante HUGE_VAL (em math.h).
 * */
double valor(double* valores, unsigned int qtd_numeros, unsigned int posicao);

/*
 * Essa função retorna o número que mais se repete e quantas vezes ele aparece (em caso de igualdade, o primeiro encontrado tem preferência) no array.
 * Retorna dentro de "qtd_repeticao" a quantidade de vezes que o determinado número se repete no array.
 * Caso for um array inválido, retorna a constante HUGE_VAL (em math.h) e ZERO em "qtd_repeticao".
*/
double repetido(double* valores, unsigned int qtd_numeros, unsigned int *qtd_repeticao);

int main(){
    FILE *abre;
    float n, maior, menor, media,len,desvio, amplitude;
    double vec[128];
    int posvec=0;
    int qtde=0;
    abre = fopen("arq-teste.dat", "r");
    
    while(fscanf(abre,"%f",&n)!= EOF){
        printf("%f\n",n );
        vec[posvec]=n;
        posvec++;
        qtde++;
    }
    // ate aqui contabilizou qtde, criou vec,
    
    for (posvec=0;posvec<qtde;posvec++){
        if(vec[posvec]>maior){
        maior=vec[posvec];
        }
    }
    printf("o maior numero e: %f\n", maior);
    // maior numero
    
    for (posvec=0;posvec<qtde;posvec++){
       if(vec[posvec]<menor){
       menor=vec[posvec];
       }
    }
    printf("o menor numero e: %f\n", menor);
    //menor numero
    
    
    media=0;
    desvio=0;
    for (posvec=0;posvec<qtde;posvec++){
       media=media+vec[posvec];
    }
    media=media/qtde;
    printf("a media e: %f\n", media);
    
    for (posvec=0;posvec<qtde;posvec++){
      desvio=desvio+(pow((vec[posvec]-media),2));
      }
    desvio=sqrt(desvio/qtde);
    
    printf("o desvio padrao e: %f\n", desvio);
    
    //media e desvio
    
    
    for (posvec=0;posvec<qtde;posvec++){
      if(vec[posvec]>maior){
      maior=vec[posvec];
      }
    }
    
    for (posvec=0;posvec<qtde;posvec++){
      if(vec[posvec]<menor){
      menor=vec[posvec];
      }
    }
    amplitude = maior-menor;
    printf("amplitude: %f\n", amplitude);
    //amplitude
    
    
    posvec=-10;
    printf("Posicao %d do vetor e: %f\n",posvec, vec[posvec]);
    if (posvec<0 || posvec>qtde){
        printf("Posição não existe!\n");
        
    }
    /*if (vec[posvec]=NULL){
        printf("Vetor invalido!\n");
    }
    implementação vetor invalido
    */
    else{
        printf("Posicao %d do vetor e: %f\n",posvec, vec[posvec]);
    }    
    //retorna valor posiçao n
    
    
    
    fclose(abre);
    return 0;
    
}
