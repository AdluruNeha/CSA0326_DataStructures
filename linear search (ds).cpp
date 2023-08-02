#include<stdio.h>
int main()
{
	int a[50],i,s,l,j;
	printf("enter no of elements in array:");
	scanf("%d",&l);
	printf("enter elements in array");
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter element to search:");
	scanf("%d",&s);
	
	for(j=0;j<l;j++)
	{
		if(a[j]==s)
		{
			printf("%d is found in position %d",s,j+1);
			break;
		}
    } 
	if(j==l)

		printf("%d is not found in array");
	
	
	return 0;
}
