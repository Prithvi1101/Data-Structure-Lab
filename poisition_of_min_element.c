#include<stdio.h>
int main()
{
    int n,i,min,pos;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
      min=arr[0];
    printf("Now printing the array:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
  
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            pos=i;
        }
    }
    printf("min: %d\n",min);
    printf("pos: %d\n",pos);
}