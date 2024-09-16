// new initialization of structure varible's attribute.
#include<stdio.h>
#include<string.h>
typedef struct pokemon {
    int hp;
    int attack;
    int speed;
    char tier;
    char name[20];
}pokemon;
int main(){
// 01->
     pokemon pikachu={60,70,100,'A',"pikachu"};  // but attributes ko order me dena hai i.e. pehle hp fir attack ise trha.
           // pikachu.hp=50;
           // pikachu.attack=60;
          // pikachu.speed=70;
        // pikachu.tier='s';
         // strcpy(pikachu.name,"pikachu");

// 02->
    // pokemon pikachu={60,70,100,};   // yeh bhi shi hai
    //           // pikachu.hp=50;
    //         // pikachu.attack=60;
    //         // pikachu.speed=70;
    // pikachu.tier='s';
    // strcpy(pikachu.name,"pikachu");

// 03->
//    pokemon pikachu={'A',"pikachu"};   // yeh error dega shi nhi hai.means shru ke nhi chodne hai.
//    pikachu.hp=50;  
//    pikachu.attack=60;
//    pikachu.speed=70;
//              //    pikachu.tier='s';
//             //     strcpy(pikachu.name,"pikachu");

// 04->
    // pokemon pikachu={60,70,100,"pikachu"};  // ye bhi error dega. means beech me kuch na chute
    //        // pikachu.hp=50;
    //        // pikachu.attack=60;
    //       // pikachu.speed=70;
    // pikachu.tier='s';
    //       // strcpy(pikachu.name,"pikachu");


    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    return 0;

}