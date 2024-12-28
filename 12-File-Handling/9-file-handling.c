#include<stdio.h>
int main(){
    // Reading a file

    FILE* ptr = fopen("shri.txt","r");
    char str[100];
    if (fgets(str,100,ptr)!=NULL){
        printf("%s",str);
    }

    // Creating a file
    FILE* pter = fopen("Achievements.txt","w");

    // Writing
    char ster[] = "I am a student";
    fputs(ster,pter);
    fclose(ptr);
}