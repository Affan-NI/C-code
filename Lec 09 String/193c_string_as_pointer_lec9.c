#include<Stdio.h>
#include<string.h>
int main(){
    char str[]="College Wallah";
    char* ptr=str;  // means str[0] ka adress.
    int i=0;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    }

        // OR //   yadi without loop ke print karna hai to.

    // printf("%s",ptr);   // yha ptr ke saath * nhi likhage.
    return 0;
}