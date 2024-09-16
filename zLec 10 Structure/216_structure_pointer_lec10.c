#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int speed;
    char name;
}pokemon;
int main(){
    pokemon pikachu;
    pokemon* x=&pikachu;  // i.e. pikachu ke 1st box ka adress.
    printf("%p",x);
    printf("\n%p",&pikachu.hp);
}