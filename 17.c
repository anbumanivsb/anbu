#include<stdio.h>
int main(){
    int n,r,s=0,t;
    printf("Enter a no: ");
    scanf("%d",&n);
    t=n;
    while(n!=0){
         r=n%10;
         n=n/10;
         s=s+(r*r*r);
    }
    if(s==t)
         printf("%d is an Armstrong no",t);
    else
         printf("%d is not an Armstrong number",t);
    return 0;
}
