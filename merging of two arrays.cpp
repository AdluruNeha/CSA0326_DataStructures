#include<stdio.h>
int main()
{
	int a[50],b[50],c[50],m,n,i,j;
	printf("enter no of elements in first array:");
	scanf("%d",&m);
	printf("enter elements of first array:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("first array:");
	for(i=0;i<m;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nenter no of elements in second array");
	scanf("%d",&n);
	printf("\nenter elements in second array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	
	printf("second array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	
	for(i=0;i<m;i++)
	{
		c[i]=a[i];
	
	}
	for(i=0;i<n;i++)
	{
		c[i+m]=b[i];
		
	}
	printf("\narray after merging first and second array:");
	for(i=0;i<m+n;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
