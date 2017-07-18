#include <stdio.h>
#include <conio.h>
void main(){
     int charcnt=0,dotcnt=0,commacnt=0,blankcnt=0,i;
     char ch,s[125];
     clrscr();
     printf("Enter a string ( 's' should be last char)\n\n");
     scanf("%[^s]s",s);
     printf("\n\nEntered String is \" %s \" \n",s);
     for(i=0;s[i]!='\0';i++){
     if(s[i]==' ')
        blankcnt++;
     elseif(s[i]=='.')
        dotcnt++;
     elseif(s[i]==',')
        commacnt++;
     }
     charcnt=i;
     printf("\n\nTotal Characters : %d",charcnt);
     printf("\nTotal Blanks     : %d",blankcnt);
     printf("\nTotal Full stops : %d",dotcnt);
     printf("\nTotal Commas     : %d",commacnt);
     getch();
}
