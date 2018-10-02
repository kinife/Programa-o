/estrutura
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fracao{
    
    int numerador;
    int denominador;
    
};

struct pessoa{
    char nome[30];
    char sobrenome[30];
    int idade;
    float altura;
};

int main(){
    struct f1;
    struct f2;
    struct pessoa p1;
    
    printf(" entr o nome: ");
    scanf("%s\n", &p1.nome);
    printf(" entr o sobrenome: ");
    scanf("%s\n", &p1.sobrenome);
    printf(" entr o idade: ");
    scanf("%d\n", &p1.idade);
    printf(" entr o altura: ");
    scanf("%f\n", &p1.altura);
    
    
    printf("%s %s, %d %f\n",p1.nome,p1.sobrenome,p1.idade,p1.altura);
    
 return 0;    
}
    
