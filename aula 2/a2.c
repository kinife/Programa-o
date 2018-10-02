#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    
    const char *naipe[4] = {"Ouros", "Copas", "Paus", "Espadas"};
    
    
    for ( int i=0; i<5; i++){
        
        printf("%d de %s.\n",(rand()%13)+1, naipe[rand()%4]);
    }
    
 return 0;   
}
