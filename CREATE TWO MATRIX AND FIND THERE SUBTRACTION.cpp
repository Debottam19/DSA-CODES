#include<stdio.h>
int main()
{
	int mat1[100][100],mat2[100][100],mat3[100][100],i,j,m,n,p,q;
	printf("Enter row size for first matrix : \n");
	scanf("%d",&m);
	printf("Enter column size for first matrix : \n");
	scanf("%d",&n);
	printf("Enter row size for second matrix : \n");
	scanf("%d",&p);
	printf("Enter column size for second matrix : \n");
	scanf("%d",&q);
	if(m==p&&n==q)
	{
		printf("Enter the numbers for the first matrix :\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&mat1[i][j]);
			}
		}
		printf("Enter the numbers for the second matrix :\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&mat2[i][j]);
			}
		}
		printf("The first matrix is : \n");
	    for(i=0;i<m;i++)
	    {
		    for(j=0;j<n;j++)
		    { 
			    printf("%d ",mat1[i][j]);
		    } 
		    printf("\n");
	    }
	    printf("The second matrix is : \n");
	    for(i=0;i<p;i++)
	    {
		    for(j=0;j<q;j++)
		    { 
			    printf("%d ",mat2[i][j]);
		    } 
		    printf("\n");
	    }
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				mat3[i][j]=mat1[i][j]-mat2[i][j];
			}
		}
		printf("The sum is : \n");
		for(i=0;i<p;i++)
	    {
		    for(j=0;j<q;j++)
		    { 
			    printf("%d ",mat3[i][j]);
		    } 
		    printf("\n");
	    }
	}
	else
	{
		printf("\nSum is not possible \n");
	}
    
	return 0;
	
}
