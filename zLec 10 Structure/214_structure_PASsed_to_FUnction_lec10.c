#include<stdio.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
}pokemon;
void fun(pokemon p){
    printf("%d",p.hp);
    return;
}
void change(pokemon p){
    p.hp=10;
    p.attack=20;
    p.speed=30;
}
int main(){
    pokemon pikachu;
    pikachu.hp=90;
    pikachu.attack=80;
    pikachu.speed=70;
    // fun(pikachu);

    change(pikachu);
    printf("%d\n",pikachu.hp);
    return 0;
}