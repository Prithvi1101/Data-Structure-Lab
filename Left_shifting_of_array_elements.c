#include<stdio.h>

int main()
{
    int i;
    int arr[5] = {0,1, 2, 3, 4};

    printf("Before left shifting:\n");
    for(i=0; i<5; i++)
    {
        printf("Element: %d, Position: %d\n", arr[i], i);
    }

  for(i=1; i<5; i++)
    {
        arr[i-1]=arr[i];
    }

    printf("After left shift:\n");
    for(i=0; i<5; i++)
    {
        printf("Element: %d, Position: %d\n", arr[i], i);
    }

    return 0;
}