#include<stdio.h>

int main()
{
    int i;
    int arr[5] = {1, 2, 3, 4};

    printf("Before right shifting:\n");
    for(i=0; i<5; i++)
    {
        printf("Element: %d, Position: %d\n", arr[i], i);
    }

  for(i=3; i>=0; i--)
    {
        arr[i+1] = arr[i];
    }

    printf("After right shift:\n");
    for(i=0; i<5; i++)
    {
        printf("Element: %d, Position: %d\n", arr[i], i);
    }

    return 0;
}