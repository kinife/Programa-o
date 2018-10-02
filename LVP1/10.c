#include <stdio.h>
#include <stdlib.h>
 int main(){
    int a,c=1,l=1;
    scanf("%d", &a);
    
    if (a<=0 || a>10) return 0;
     
    printf("x");
    for (c=1;c<=a;c++)
        printf(" %d",c);
    printf("\n");
    
    for (l=1; l<=10; l++){
        printf("%d",l);
        for (c=1;c<=a;c++){
        
         printf(" %d",c*l);   
        }
        
        printf("\n");
    
 }
    
    return 0;

}
