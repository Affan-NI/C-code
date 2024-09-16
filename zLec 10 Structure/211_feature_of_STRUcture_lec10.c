#include<Stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    pokemon a,b,c;
    a.attack=100;
    a.hp=90;
    a.speed=80;
    a.tier='A';
    strcpy(a.name,"charizard");

    // b.attack=100;
    // b.hp=90;
    // b.speed=80;
    // b.tier='A';
    // strcpy(b.name,"charizard");
            // OR
    b=a;    // deep copy
    strcpy(b.name,"pikachu");
    printf("%d\n",b.attack);
    printf("%s",b.name);

    return 0;
}