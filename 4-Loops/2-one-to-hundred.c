// Print numbers from 1 to 100.
#include <stdio.h>
int main()
{
    // for (int i = 1; i <= 100; i++)
    // {
    //     printf("%d\n", i);
    // }
    // return 0;

    // Even numbers from 1 to 100
    // for (int i = 1; i <= 100; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         printf("%d ", i);
    //     }
    // }

    // Odd Numbers from 1 to 100
    for(int i=1;i<=100;i++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
    return 0;
}