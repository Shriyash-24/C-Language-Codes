#include <Stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    typedef struct legendary
    {
        pokemon normal;
        char ability[100];
    } legendary;

    typedef struct godpokemon{
        legendary legend;
        int special;
    } godpokemon;


    legendary mewto;
    strcpy(mewto.ability,"Pressure");
    mewto.normal.hp = 150;
    strcpy(mewto.normal.name,"Mewto");
    mewto.normal.attack = 80;
    mewto.normal.tier = 'S';
    mewto.normal.speed = 90;

    godpokemon arceus;
    arceus.special = 300;
    strcpy(arceus.legend.ability,"Stone");
    arceus.legend.normal.speed = 500;
}