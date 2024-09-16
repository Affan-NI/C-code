#include<stdio.h>
#include<string.h>
int main(){
    char str[]="College Wallah";
    char* ptr=str;
    str[0]='p';
    printf("%s",ptr);
    return 0;
}