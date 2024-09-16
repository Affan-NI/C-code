#include<stdio.h>
int main(){
    char* ptr="College Wallah";
    printf("%c\n",ptr[4]);
    printf("%s\n",ptr);
    // OR
    int i=0;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    }


    return 0;
}