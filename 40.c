#include<stdio.h>
int main(){
    int k,r;
    long int i=0l,j=1,f;
    
    scanf("%d",&r);

   
    printf("%ld %ld",i,j);

    for(k=2;k<r;k++){
         f=i+j;
         i=j;
         j=f;
         printf(" %ld",j);
    }
  
    return 0;
}
