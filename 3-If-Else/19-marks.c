#include <stdio.h>
int main()
{
    int n;
    printf("Enter percentage: ");
    scanf("%d", &n);
    // More than 80 --> A
    // More than 60 --> B
    // More than 40 --> C
    // Less than 40 -->D
    if (n > 80)
    {
        printf("A Grade\n");
    }
    else if (n > 60)
    {
        printf("B Grade\n");
    }
    else if (n > 40)
    {
        printf("C Grade\n");
    }
    else
    {
        printf("D Grade\n");
    }
    return 0;
}