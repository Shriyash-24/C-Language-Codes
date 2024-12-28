// Display this AP - 1,3,5,7,9..upto 'n' terms.
// Last term - An = 1+(n-1)*2 = 1+2n-2 = 2n - 1.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    // for (int i = 1; i <= 2 * n - 1; i += 2)
    // {
    //     printf("%d ", i);
    // }

    // Display this AP - 4,7,10,13,16.. upto 'n' terms.
    // Last Term - 4+(n-1)*3 = 3n + 1
    for (int i = 4; i <= 3 * n + 1; i += 3)
    {
        printf("%d ", i);
    }
    return 0;
}