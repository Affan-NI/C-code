#include<stdio.h>
int main(){
// while loop ka use karo.
    int i=65;
    while (i<=90)
    {   char ch=(char)i;    // ise typecasting kahte hai.
        printf("%c -> %d \n",ch,i);
        i++;
    }
    
    return 0;
}