#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,l,t=0;
	char a[50];
	printf("enter a string:");
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]!=a[l-1-i])
		{
			t=1;
			break;
		}
	}
	if(t==1)
	printf("given string is not a palindrome");
	else
	printf("given string is a palindrome");
}
