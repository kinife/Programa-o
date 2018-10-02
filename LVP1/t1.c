#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int transforma_string(unsigned short int a){
    char vg[30];
    int n,i,h,cvd=0,pr;
    sprintf(vg, "%d", a);
    n=strlen(vg);
    
    char vd[n]; 
    
    for (i=0; i<=n; i++){
        vd[i]=vg[i];
        }
    pr=(n*2)-2;
    char res[pr];
    
    for (h=0; h<=pr ; h++){
            res[h]=vd[cvd];
            cvd++;
            printf ("depois do for: %d %s\n" ,h,res);
             if (h<pr){
            h++;
            res[h]= '-';
            printf("depois do if: %d %s\n", h, res);
            }
            
    }
    
    printf("res: %s\n",res);
}

int main(){
    int ts,n;

    printf("numero n: ");
    scanf("%d",&n);

    
    ts=transforma_string(n);

return 0;
}
