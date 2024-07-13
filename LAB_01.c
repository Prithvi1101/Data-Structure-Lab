#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter no of elements you want in the array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for( i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
            printf("Array elements are:");

    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}