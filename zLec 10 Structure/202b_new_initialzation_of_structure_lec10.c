#include<stdio.h>
int main(){
    struct pokemon {    // user define data type
        int hp;
        int speed;
        int attack;
        char tier;  // S,A,B,C,D        
    } pikachu,charizard,mewtwo;
    
    pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';
    
    charizard.hp=80;
    charizard.speed=80;
    charizard.tier='S';

    mewtwo.attack=170;
    mewtwo.hp=150;
    mewtwo.speed=80;
    mewtwo.tier='D';

    printf("%d\n",mewtwo.speed);
    printf("%c\n",charizard.tier);

    
    return 0;
}