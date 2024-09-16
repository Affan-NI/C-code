#include<stdio.h>
#include<string.h>
int main(){
    typedef union pokemon {
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    }pokemon;
    pokemon pikachu;
    pikachu.hp=50;
    pikachu.attack=60;    
    strcpy(pikachu.name,"pikachu");
    pikachu.speed=70;
    pikachu.tier='A';

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    return 0;
}