#include<stdio.h>
#include<string.h>
int main(){
    // 01->
     typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    // 02 ->
    typedef struct legendarypokemon{     
        pokemon normal;         // isme pokemon ke  attribute bhi dal do.  normal ki jagha kuch bhi likh sakte hai.
        char ability[100];
    }legendarypokemon;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"pressure");
    mewtwo.normal.hp=150;
    mewtwo.normal.attack=180;
    printf("%d\n",mewtwo.normal.attack);
    printf("%s\n",mewtwo.ability);

    //  03 ->
    typedef struct superpokemon{
        legendarypokemon legend;    // isme legendarypokemon ke  attribute bhi dal do
        int specialattack;
    }superpokemon;

    superpokemon arceus;
    arceus.specialattack=300;
    strcpy( arceus.legend.ability,"Turn anyone tostone");
    arceus.legend.normal.attack=500;
    printf("%d\n",arceus.legend.normal.attack);
    return 0;
}