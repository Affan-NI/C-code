#include<stdio.h>
void england(){
    printf("You are in England");
    return;
}
void australia(){
    printf("You are in australia \n");
    england();
    return;
}
void india(){
    printf("YOu are in India\n");
    australia();
    return;
}
int main(){
    india();
    return 0;
}