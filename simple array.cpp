#include<stdio.h>
int main()
{
	int a[50],i,l;
	printf("enter no of elements in array :");
	scanf("%d",&l);
	printf("enter elements in array:");
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array:");
	for(i=0;i<l;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
