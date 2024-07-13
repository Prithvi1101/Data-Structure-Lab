#include<Stdio.h>
int main()
{
    int rowA,columnA,rowB,columnB,i,j;
    printf("Enter order of Matrix A (No. of Rows & Columns):\n");
    scanf("%d %d",&rowA,&columnA);
    int arrA[rowA+1][columnA+1];//1 based indexing
    printf("Enter order of Matrix B (No. of Rows & Columns):\n");
    scanf("%d %d",&rowB,&columnB);
    int arrB[rowB+1][columnB+1];
    int arrC[rowA+1][columnB+1];
    if(columnA!=rowB)
    {
        printf("|ERROR| \nThe number of rows of the matrix A should be same as the number of Columns of matrix B.Please Try again!\n");
    }
    for(i=1; i<=rowA; i++)
    {
        for(j=1; j<=columnA; j++)
        {

            printf("Enter the a[%d][%d] element of Matrix A:\n",i,j);
            scanf("%d",&arrA[i][j]);
        }
    }
    for(i=1; i<=rowB; i++)
    {
        for(j=1; j<=columnB; j++)
        {

            printf("Enter the a[%d][%d] element of Matrix B:\n",i,j);
            scanf("%d",&arrB[i][j]);
        }
    }
    printf("\nTherefore, Elements of Matrix A:\n");
    for(i=1; i<=rowA; i++)
    {
        for(j=1; j<=columnA; j++)
        {
            printf("a[%d][%d] : %d\t\n",i,j,arrA[i][j]);
        }
    }
    printf("\nTherefore, Elements of Matrix B:\n");
    for(i=1; i<=rowB; i++)
    {
        for(j=1; j<=columnB; j++)
        {
            printf("a[%d][%d] : %d\t\n",i,j,arrB[i][j]);
        }
    }
    printf("Now multiplication of both the matrices:\n");
    for(i=1; i<=rowA; i++)
    {
        for(j=1; j<=columnB; j++)
        {
            int sum=0;
            for(int k=1; k<=columnA; k++) //traversing ******
            {

                sum+=arrA[i][k]*arrB[k][j];
            }
            arrC[i][j]=sum;

        }

    }
    for(i=1; i<=rowA; i++)
    {
        for(j=1; j<=columnB; j++)
        {
            printf("a[%d][%d] : %d\t\n",i,j,arrC[i][j]);
        }
    }

}

