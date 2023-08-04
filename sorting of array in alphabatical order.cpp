#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,x;
	char a[50];
	printf("enter the string:");
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	printf("string after sorting: %s",a);
}
