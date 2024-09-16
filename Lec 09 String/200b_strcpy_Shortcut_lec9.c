#include<Stdio.h>
#include<string.h>
int main(){
    char s1[12]="Raghav Garg";
    char s2[12];
    strcpy(s2,s1); // copies the contents of string s1 to string s2.
    printf("%s",s2);

        // OR
    // char str[70];
    // strcpy(str,"physics WAllah");
    // printf("%s",str);
    return 0;
}