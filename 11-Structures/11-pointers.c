#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon;

int main(){
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 80;
    pikachu.speed = 90;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"Pikachu");
    pokemon* x = &pikachu;
    printf("%p\n",x); // pikachu ki hp ka jo address hoga vo store hoga.

    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.tier);
    printf("%p\n",&pikachu.name);


}