#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int reverse(int x);

int main()
{
    int num =-123679;

    printf("%d", reverse(num));
    return 0;
}

int reverse(int x)
{

    int temp = x;


    int sum = 0;

    while (temp!=0)
    {

        int rem = temp % 10;


        if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && rem > 7))
        {
            return 0;
        }
        if (sum < INT_MIN / 10 || (sum == INT_MIN / 10 && rem < -8))
        {
            return 0;
        }


            sum = sum * 10 + rem;


            temp = temp/10;




    }
     return sum;
}


