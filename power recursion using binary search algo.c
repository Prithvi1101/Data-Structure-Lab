#include<stdio.h>
int main()
{

    long base,power;
    printf("Enter base:");
    scanf("%d",&base);

    printf("Enter power:");
    scanf("%d",&power);
    long powRecursion(int base,int power)
    {
        if(power==1)
        {

        return base;

        }
        if(power%2==0)
        {

            int ans=powRecursion(base,power/2);
            return ans*ans;
        }
        else if(power%2!=0)
        {
            return base*powRecursion(base,power-1);

        }


    }
    int result=powRecursion(base,power);
printf("Result: %d",result);

}

