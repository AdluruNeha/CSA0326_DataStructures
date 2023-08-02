#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],c[50][50],m,n,p,q,i,j,k,sum;
	printf("enter rows and columns of first matrix:");
	scanf("%d %d",&m,&n);
	printf("enter elements of first matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    printf("first matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("enter rows and columns of second matrix:");
	scanf("%d %d",&p,&q);
	printf("enter elements of second matrix:");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("second matrix:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	if(n!=p)
	{
		printf("we can not multiply these matrices");
	}
	else
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				c[i][j]=0;
				for(k=0;k<n;k++)
				{
					c[i][j] += a[i][k] * b[k][j];
			    }
			}
		}
		
	    printf("multiplication is \n");
	    for(i=0;i<m;i++)
     	{
    		for(j=0;j<q;j++)
        		{
          			printf("%d\t",c[i][j]);
	        	}
    		printf("\n");
    	}	
	
    }
	
}
