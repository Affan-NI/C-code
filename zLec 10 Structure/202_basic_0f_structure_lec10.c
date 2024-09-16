#include<stdio.h>
int main(){
    struct pokemon {    // user define data type
        int hp;
        int speed;
        int attack;
        char tier;  // S,A,B,C,D        
    };
    struct pokemon pikachu; // pikachu name ka ek bada dabba(arthaat array) jisme filhal 4 dabbe hai jisme 3 int type 1 char type.
    pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';

    struct pokemon charizard; // charizard name ka ek bada dabba(arthaat array) jisme filhal 4 dabbe hai jisme 3 int type 1 char type.
    charizard.attack=130;
    charizard.hp=80;
    charizard.speed=80;
    charizard.tier='S';

    struct pokemon mewtwo; // mewtwo name ka ek bada dabba(arthaat array) jisme filhal 4 dabbe hai jisme 3 int type 1 char type.
    mewtwo.attack=170;
    mewtwo.hp=150;
    mewtwo.speed=80;
    mewtwo.tier='D';

    printf("%d\n",mewtwo.speed);
    printf("%c\n",charizard.tier);

    struct pokemon fla;
    printf("Enter fla pokemon attack = ");
    scanf("%d",&fla.attack);

    printf("%d\n",fla.attack);
    
    return 0;
}