#include<stdio.h>
int main(){
    int no,r,sum=0,temp;

    printf("Enter a no: ");
    scanf("%d",&no);

    temp=no;
    while(no){
         r=no%10;
         no=no/10;
         sum=sum*10+r;
    }
    if(temp==sum)
         printf("%d is a palindrome",temp);
    else
         printf("%d is not a palindrome",temp);

    return 0;
}
