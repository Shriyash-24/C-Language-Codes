// Given a point (x,y), write a program to find out if it lies on the x axis, y axis or at the origin.
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter x and y");
    scanf("%d%d", &x, &y);
    if (x > 0 && y == 0)
    {
        printf("The point lies on X - axis.");
    }
    else if (x == 0 && y > 0)
    {
        printf("The point lies on Y - axis.");
    }
    else if (x > 0 && y > 0)
    {
        printf("The point neither lies on X or Y, nor at the origin.");
    }
    else
    {
        printf("The point lies on the origin.");
    }
    return 0;
}