#include<stdio.h>
int main()
{
	int mat[100][100],i,j,r,c,trace = 0;
	printf("Enter the row size : \n");
	scanf("%d",&r);
	printf("Enter the column size : \n");
	scanf("%d",&c);
	if(r==c)
	{
	 	printf("Enter the numbers of the matrix : \n");
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
			   if(i==j)
			   {
				    trace=trace+mat[i][j];
			   }
		    }
	} 
	printf("The trace of the matrix is : %d \n",trace);
	}
    else
    {
    	printf("Finding trace is not possible\n");
	}
	
	return 0;
}