#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[50],b[50],c=0;
	printf("enter first string:");
	gets(a);
	printf("enter second string:");
	gets(b);
	if(strlen(a)==strlen(b))
	{
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]==b[i])
			c++;
	    }
	    if(c==i)
	    printf("strings are equal");
	    else
	    printf("strings are not equal");
	}
	else
	printf("strings are not equal");
}
