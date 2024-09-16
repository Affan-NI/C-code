#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[20];
}pokemon;
void change(pokemon* p){
    (*p).hp=60; // OR (*p).hp = p->hp
    // (*p).attack=70;
    p->attack=70;
    (*p).speed=80;
    (*p).tier='A';
    strcpy((*p).name,"Raichu");
    return;
}
int main(){
    pokemon pikachu;
    pikachu.hp=50;
    pikachu.attack=60;
    pikachu.speed=70;
    pikachu.tier='s';
    strcpy(pikachu.name,"pikachu");

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    change(&pikachu);

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    return 0;
}