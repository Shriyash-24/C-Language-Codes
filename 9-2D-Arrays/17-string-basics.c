#include<stdio.h>
int main(){
    // Stores atlas as a character array, because a string is stored as a character array.
    char arr[5] = {'a','t','l','a','s'};
    char arr2[] = "Hello";
    int i=0;
    while(i<5){
        printf("%c ",arr2[i]);
        i++;
    }
    printf("%c",arr[1]);
    return 0;
}