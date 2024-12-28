// Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.
// 1st Method.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n % 5 == 0 || n % 3 == 0)
    {
        if (n % 15 != 0)
        {
            printf("Divisible by 5 or 3 but not 15");
        }
        else
        {
            printf("Divisible by 5 or 3 and divisible by 15");
        }
    }
    else
    {
        printf("The number is not divisible by 5 or 3.");
    }
    return 0;
}

// 2nd Method
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if ((n % 5 == 0 || n % 3 == 0) && n % 15 != 0)
    {
        printf("The number is divisible by 5 or 3 but not fifteen");
    }
    else
    {
        printf("The number is not matching the required condition");
    }
}