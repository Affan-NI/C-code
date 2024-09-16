#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%[^\n]s",str);  // entire sentense can be input.
    printf("Your input was : %s",str);
    return 0;
}