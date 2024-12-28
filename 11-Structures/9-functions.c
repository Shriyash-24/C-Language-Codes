#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon;

void fun(pokemon p)
{
    printf("%d", p.hp);
    return;
}
void change(pokemon p){
    p.hp = 70;
    return;
}
int main()
{
    pokemon pikachu;
    pikachu.hp = 60;

    change(pikachu); // hp won't change of pikachu. Ek naya p ban gya aur usme changes hue. Koi bhi change pikachu mei nahi aayega. This is known as pass by value.

    // printf("%d",pikachu.hp);
    printf("%d\n",pikachu.hp);
    // fun(pikachu);
    return 0;
}