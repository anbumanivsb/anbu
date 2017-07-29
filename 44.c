#include<stdio.h>
int getnumber();    
int main() {
    int i = 0;
    i = getnumber();
    while (!((i <= 9) && (i >= 1))) {
    i = getnumber();
    }
    printf("%d", i);
    return 0;
}      
int getnumber() {    
    int n;
    scanf("%d", &n);
    return (n);
}
