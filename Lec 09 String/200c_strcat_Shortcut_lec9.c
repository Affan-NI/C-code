#include<Stdio.h>
#include<string.h>
int main(){
    char s1[11]="Raghav"; // yha s1 v s2 dono ka size milakar s1 me dete hai chahe thoda zada do.
    char s2[]="Garg";
    strcat(s1,s2); // s2 ka maal bhi s1 me stor kar deta hai
    printf("%s",s1);
    return 0;
}