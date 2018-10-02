#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
 int n,c,c2,fat=1,tam=0;
 int i,c3=0;
 scanf("%d",&n);
 if (n==0) fat=1;
 for (c=1;c<=n;c++){
        fat=fat*c;
        
 }
        printf("o fatorial eh: %d\n",fat);
        
        
        char str[i]; 
        sprintf(str,"%u",fat);
        i=strlen(str);
        printf("tamanho do numero: %d\n", i);
        for(c2=i-1; c2>=0; c2--){
                printf("str[c2]:%s\n",&str[c2]);
                if(str[c2]=='0'){ 
                    c3++; 
                    printf("c2 %d\n",c2);
                }else{
                    break;
                }
        }
        printf("numero de zeros: %d\n",c3);
        printf("char: %s",str); 

    }
     
