#include<stdio.h>
int fact(int);
int main()
{
	int a,n;
	printf("\n enter the number:");
	scanf("%d",&n);
	a=fact(n);
	printf("factorial is %d",a);
	return 0;
}
int fact(int n)
{
	if(n==0)
	return (1);
	return(n*fact(n-1));
}


