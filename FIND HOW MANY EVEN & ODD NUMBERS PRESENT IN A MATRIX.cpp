#include<stdio.h>
int main()
{
	int mat[100][100],r,c,i,j,even=0,odd=0;
	printf("Enter the number of rows : \n");
	scanf("%d",&r);
	printf("Enter the number of columns : \n");
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
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(mat[i][j]%2==0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}
	}
	printf("Total even numbers present : \n%d\n",even);
	printf("Total odd numbers present : \n%d\n",odd);
	return 0;
}
