#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct monstro{
    char cor[128];
    int forca;
    float altura;
};

int main(){
    struct monstro *m1;
    m1=((struct monstro*) malloc(10*(sizeof (struct monstro)
    )));
    printf(" %s  %d  %f\n",m1->cor,m1->forca,m1->altura);
    
 return 0;
}
