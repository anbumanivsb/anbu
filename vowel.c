#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char ch;
	printf(" please enter alphabet : ");
	scanf("%c",&ch);
	if(ch=='a' || ch=='A' || ch=='e' || ch=='E' ||
	ch=='i' || ch=='I' || ch=='o' || ch=='O' ||
	ch=='u' || ch=='U')
	{
		printf("The alphabet is a vowel");
	}
	else
	{
		printf("The alphabet is not a vowel");
	}
	getch();
}
