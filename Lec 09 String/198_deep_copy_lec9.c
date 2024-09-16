#include<stdio.h>
#include<string.h>
int main(){
// s1 v s2 dono different string hai islia s2 me change se s1 me fark nhi pada isla yhe deep copy hai.
    char s1[]="physics wallah";
    
    char s2[]="physics wallah";
    s2[0]='M';
    printf("%s\n",s1);
     printf("%s",s2);

    return 0;
}