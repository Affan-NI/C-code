#include<stdio.h>
int main(){
    void india();
    india();
    return 0;
}
void india(){
    printf("YOu are in India\n");
    void australia();
    australia();
    return;
}
void australia(){
    printf("You are in australia \n");
    void england();
    england();
    return;
}
void england(){
    printf("You are in England");
    return;
}


