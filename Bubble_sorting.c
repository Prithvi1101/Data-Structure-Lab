#include<stdio.h>
int main()
{
    int size,i,pos,step=0,temp,iterations=0,swap_counter=0,swap=0;
    printf("Enter size:\n");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter elements of array:\n");
    for(i=0; i<=size-1; i++)
    {

        scanf("%d",&arr[i]);
    }
    printf("The unsorted array: \n");
    for(i=0; i<=size-1; i++)
    {

        printf("%d \t",arr[i]);
    }
    printf("\nAfter bubble sorting:");
    for(step=1; step<=size-1; step++)
    {
        iterations++;
        for(i=0; i<=size-1-step; i++)
        {
            iterations++;
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                swap++;
                printf("\n");
                printf("\nThe state of the array at %dth iteration:\n");
                {

                    for(int j=0; j<=size-1; j++)
                    {

                        printf("%d\t",arr[j]);
                    }
                }

            }
        }

    }
    printf("\nThe sorted array:\n");
    for(i=0; i<=size-1; i++)
    {

        printf("%d\t",arr[i]);
    }
    printf("\nNo. of swaps required: %d\n",swap);
    printf("No. of steps required: %d",step);
    return 0;
}
