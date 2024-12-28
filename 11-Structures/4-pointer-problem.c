#include <stdio.h>
typedef int* pointer;
int main()
{
    int x = 5, y = 7;
    pointer a,b; // Computer reads this int* a,b like this --> int* x and int y. You can solve this by typedef.
    printf("%p\n", a);
    printf("%p\n", b);
}