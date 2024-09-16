// nesting apni taraf se.
#include<stdio.h>
int main(){
    struct pokemon {
        int hp;
        int attack;
        int speed;
    } pikachu, charizard, mewtwo;
    struct lagendry_pokemon { // lagendry and pokemon ke beech me gap nhi de sakte hai.
        int specialattack;
        struct pokemon;         // means pokemon data type ke attribute lagendary_POkemon me bhi dal do.
    }don;
    
    don.speed=900;
    printf("%d\n",don.speed);
    
    don.specialattack=700;
    printf("%d\n",don.specialattack);
      
    
    return 0;
}