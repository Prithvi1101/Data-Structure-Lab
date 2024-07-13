#include<stdio.h>

int main()
{
    int i,num;
    int arr[6] = {0,1,2,3,4};
    printf("Inserting at beginning:\n");
    //rightshift
    for(i=5;i>=0;i--)
    {
        arr[i+1]=arr[i];

    }
    printf("Enter what u want to enter:");
    scanf("%d",&num);
    arr[0]=num;
    printf("\nArray after inserting at the beginning is :\n");
    for(i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
