// Cost and Selling Price is Inputted and Profit and Loss is determined.
#include<stdio.h>
int main(){
    int cp,sp;
    printf("Cost Price: ");
    scanf("%d",&cp);
    printf("Selling Price: ");
    scanf("%d",&sp);
    if(sp>cp){
        printf("Profit: %f",sp - cp);
    }
    if(sp==cp){
        printf("Equality");
    }
    else{
        printf("Loss: %d",cp - sp);
    }
    return 0;
}