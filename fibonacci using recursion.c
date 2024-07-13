#include <stdio.h>
int F(int);

int main()
{
    int num;
    int result;

    printf("Enter the nth number in fibonacci series: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Fibonacci of negative number is not possible.\n");
    }
    else
    {
        result = F(num);
        printf("The %d number in fibonacci series is %d\n", num, result);
    }
    return 0;
}
int F(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return(F(num - 1) + F(num - 2));
    }
}
