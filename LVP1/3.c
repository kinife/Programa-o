#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verifica_ultimos_digitos(int a, int b){
  int r,ia,ib;
  char va[50],vb[50];  
  sprintf(va,"%d",a);
  sprintf(vb,"%d",b);
  ia=strlen(va);
  ib=strlen(vb);
  if(a>=b){
      while(ib>-1){
            if (va[ia]==vb[ib]){
                ia--;
                ib--;
                r=1;
            }
            else {                
                r=0;
                break;
            }
            } 
  }
  else r=0;
  printf("a: %s\n",va);
  printf("b: %s\n",vb);
  printf("ia: %d\n",ia);
  printf("ib: %d\n",ib);
  printf("r: %d\n",r);
  return r;  
}

int verifica_segmento(int a, int b){
   int maior, menor,imaior,imenor;
   if (a>=b){
       maior=a;
       menor=b;
   }
   else {
       maior=b;
       menor=a;
   }
   
   
  int r;
  char vmaior[50],vmenor[50];  
  sprintf(vmaior,"%d",maior);
  sprintf(vmenor,"%d",menor);
  imaior=strlen(vmaior);
  imenor=strlen(vmenor);
      while(imenor>-1){
            if (vmaior[imaior]==vmenor[imenor]){
                imaior--;
                imenor--;
                r=1;
            }
            
            else {                
                r=0;
                imenor--;
            }
            } 
  
    
  printf("a: %s\n",vmaior);
  printf("b: %s\n",vmenor);
  printf("ia: %d\n",imaior);
  printf("ib: %d\n",imenor);
  printf("r: %d\n",r);
  return r;
   
}

void main(){
  int a,b,c,d; 
  printf("numero a:");
  scanf("%d",&a);
  printf("\nnumero b:");
  scanf("%d",&b);
  printf("\n");
  
  c = verifica_ultimos_digitos(a,b);
  d = verifica_segmento(a,b);
}
