/*TO FIND TRANPOSE OF A MARTRIX WITHOUT USING TEMPORARY ARRAY*/
#include<stdio.h>
int main()
{
    int mat[20][20];
    int i,j,row,col,temp;
    printf("Enter the number of rows and columns for first matrix\n");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
 
 
    printf("The matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<i;j++)
        {
            temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }
 
    printf("The transpose of the matrix is\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
return 0;
}
  
 

