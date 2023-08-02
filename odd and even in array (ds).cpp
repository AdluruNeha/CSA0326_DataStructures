#include<stdio.h>
int main()
{
	int a[50],l,i,o,e,ne=0;
	printf("enter no of elements in array:");
	scanf("%d",&l);
	printf("enter elements of array:");
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<l;i++)
	{
		if(a[i]%2==0)
		{
			ne++;
		}
	}
	printf("even elements in array are: ");
	for(i=0;i<l;i++)
	{
		if(a[i]%2==0)
		printf("%d ",a[i]);
	}
	printf("\nodd elements in array are: ",a[i]);
	for(i=0;i<l;i++)
	{
		if(a[i]%2==1)
		printf("%d ",a[i]);
	}
	printf("\nno of even elements: %d",ne);
	printf("\nno of odd elements: %d",l-ne);
}
