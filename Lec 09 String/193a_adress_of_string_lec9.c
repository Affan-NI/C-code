#include<Stdio.h>
#include<string.h>
int main(){
    char str[]="College Wallah";
    // adress-> of 1st element.
    printf("%p\n",&str[0]);
        // OR
    char* ptr=&str[0];
    printf("%p",ptr);
    return 0;
}