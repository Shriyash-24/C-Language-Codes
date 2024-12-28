// Display this AP - 100,97,94,..upto all terms which are positive.
#include<stdio.h>
int main(){
    // One method
    // for(int i=100;i>=0;i-=3){
    //     printf("%d ",i);
    // }
    // Second Method
    int a = 100;
    for(int i=1;a>0;i++){ //Not necessary to put i in the condition.
        printf("%d ",a);  
        a-=3;      
    }
    return 0;
}