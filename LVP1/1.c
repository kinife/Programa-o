#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numero_perfeito(int x){
    
    int d,s,f=0;
    if(x>1){
        s=0;
        for (d=x-1;d>0;d--){
            
            if (0==x%d) s=d+s;
        }

        if (s==x) f=1;
    }
printf("%d\n", f);
return f;
}


int encontra_perfeito(int min, int max, char *vec){
    
    int d,s,c,tam,i,posvec=0;
    char v[10];
    if (max>=min){
        for(c=min;c<=max;c++){
            if(c>2){
                s=0;
                for (d=c-1;d>0;d--){
                    if (0==c%d) s=d+s;
                }
                if (c==s) {
                    printf("perfeito: %d \n", c);
                    sprintf(v, "%d", c);
                    printf("v: %s \n", v);
                    tam = strlen(v);
                    printf("tam: %d \n", tam);

                    if(posvec > 0){
                        vec[posvec] = ',';
                        posvec++;
                    }

                    for(i=0;i<tam;i++){
                        vec[posvec] = v[i];
                        posvec++;
                    }
                    
                }
         
            }
        }
    }
    if(posvec!=strlen(vec)){
        vec[posvec] = '\0';
    }
       
}

int main(){
 int np,x,ep,a,b;
 char vec[10];
 printf("funcao verifica numero perfeito:\n");
 scanf ("%d", &x);

 np = numero_perfeito(x);
 
 printf("funcao verifica intervalo:\n");

 
 scanf ("%d",&a);
 scanf ("%d",&b);
 
 
 ep = encontra_perfeito(a, b, vec);

 printf("vec: %s\n",vec);
 return 0;
}
