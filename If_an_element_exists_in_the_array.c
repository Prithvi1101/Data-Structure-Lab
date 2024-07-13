//given an elementk.Find if the k is present.If yes,find its position,otherwise-1
#include<stdio.h>
int main()
{
    int n,i,count=0,num;
    printf("Enter no of elements you want in the array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for( i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter element to see if its available in the array:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k==arr[i])
        {
            count++;
            num=arr[i];
            printf("Yes,The position of the element in the array: %d\n",i);
            printf("The element: %d",num);
        }
        
    }
    if(count==0)
    {
        printf("-1");
    }
    return 0;
}