#include<stdio.h>
#define PI 3.14159265359
// #define creates a shortcut so we could use a complex thing or formula. Permanently PI's value is now that number.
#define Area(r) (PI*r*r)

int main(){
    printf("%f\n",PI); // Float can be used only upto 6 decimal places.
    printf("%f",Area(10));
}