#include <stdio.h>
int main()
{
    int sub[50], i;
    for (i = 0; i <= 48; i++); // just i value will change here.
    {
        sub[i] = i;
        printf("%d", sub[i]);
    }
}