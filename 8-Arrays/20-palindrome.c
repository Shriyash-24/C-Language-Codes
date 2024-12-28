// If an array arr contains n elements, then check if the given array is a palindrome or not.

#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,2,1};
    int i = 0;
    int j = 4;
    int isPalindrome = 1;
    while(i<j){
        if(arr[i] != arr[j]){
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if(isPalindrome){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
    return 0;
}