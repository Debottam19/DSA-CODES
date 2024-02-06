#include<stdio.h>
int main()
{
	int mat[100][100],i,j,r,c;
	printf("Enter row size : \n");
	scanf("%d",&r);
	printf("Enter column size : \n");
	scanf("%d",&c);
	printf("Enter the numbers : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("The matrix is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	
}
