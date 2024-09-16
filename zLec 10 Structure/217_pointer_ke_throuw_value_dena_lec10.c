// pointer ke throw structure ke attribute ko value dena.
#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int speed;
    char name;
}pokemon;
int main(){
    pokemon pikachu;
    pokemon* x=&pikachu; 
    (*x).hp=60; //pikachu.hp=60         // () yeh bracket lagate hai varna error dega.
    (*x).speed=80; // pikachu.speed=80;

    printf("%d",pikachu.speed);
    printf("\n%d",pikachu.hp);
    return 0;
}