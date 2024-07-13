#include<stdio.h>
int main()
{

    int base,power;
    printf("Enter base:");
    scanf("%d",&base);

    printf("Enter power:");
    scanf("%d",&power);
    long long int powRecursion(int base,int power)//int range=2^31 to -2^31 long long int
    {
        if(power==1)
        {

            return base;
        }
        else
        {
            return base*powRecursion(base,power-1);
        }

    }
    long long int result=powRecursion(base,power);
    printf("Result: %d",result);

}
