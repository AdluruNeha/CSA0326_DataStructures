#include<stdio.h>
int main()
{
	int i,n,s=0,s1=1,s2;
	printf("enter a number:");
	scanf("%d",&n);
	printf("%d ",s);
	printf("%d ",s1);
	for(i=1;i<=n-2;i++)
	{
		s2=s+s1;
		s=s1;
		s1=s2;
		printf("%d ",s2);
	}
}
