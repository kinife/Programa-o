#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcula_inteiro_quo(int a, int b){
    int x;
    x=a/b;
    printf("o inteiro do quociente eh: %d\n",x);
    return x;
}


int calcula_resto_inteiro(int a, int b){
    double x, r ,da,db;
    int i=2,ir=0,z,k;
    char vec[30];
    char res[30];
    da=a;
    db=b;
    z=da/db;
    x=da/db;
    r=x-z;
    sprintf(vec, "%f",r);

    for(i=2;i<strlen(vec);i++){
        res[ir]=vec[i];
        ir++;
    }
    k=strtol(res,NULL, 10);
    printf("K: %i\n",k);
    return k;
}

char* transforma_string( int a){
    char vg[30];
    int n,i,h,cvd=0,pr;
    sprintf(vg, "%d", a);
    n=strlen(vg)+1;
    
    char vd[n]; 
    
    for (i=0; i<=n; i++){
        vd[i]=vg[i];
        }
    pr=(n*2)-2;
    char res[pr];
    char *ptr[pr];
    for (h=0; h<=pr ; h++){
            res[h]=vd[cvd];
            if(h==pr-1){
              res[h]= '\0';
              break;
            }
            h++;
            res[h]= ' ';
            cvd++;
    }
    res[strlen(res)-1]='\0';
    *ptr=res;
    printf("res: %s\n",*ptr);
    
    return *ptr;

    free(*ptr);
}


int main(){
    int ci,cr,a,b,n;
    char *ts[30];
    printf("numero a: ");
    scanf("%d",&a);
    printf("numero b: ");
    scanf("%d",&b);
    printf("numero n: ");
    scanf("%d",&n);
    
    ci=calcula_inteiro_quo(a,b);
    
    cr=calcula_resto_inteiro(a,b);
    
    *ts=transforma_string(n);

return 0;
}

