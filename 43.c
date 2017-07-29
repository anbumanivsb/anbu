#include<stdio.h>
#include<conio.h>
void main()
{
char s1[30],s2[30],s3[60];
int i,j;
gets(s1);
gets(s2);
for(i=0;s1[i]!=’’;++i)
s3[i]=s1[i];
for(j=0;s2[j]!=’’;++j)
s3[i+j]=s2[j];
s3[i+j]=’’;
printf(“n%s”,s3);
getch();
}
