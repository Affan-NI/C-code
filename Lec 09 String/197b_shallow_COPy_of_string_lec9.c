#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="College Wallah";
    char* s2=s1; // s2 is a shallow copy(jo chang hum s1 me karege vhe s2 me hoga cho0ki s2 , s1 ko point kar rha hai)
    s1[0]='M';
    printf("%s",s2);
    return 0;
}