#include<stdio.h>
void fun(int a[]){ // yaha empty size ka array hoga
    int temp = a[0];
    a[0] = a[1];
    a[1] = temp;
    return;

}
int main(){
    int arr[2] = {2,9};
    fun(arr); // yaha naam hii likho array ka
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
}