// copy of one string to another string creating a deep copy.
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Physics wallah";
    printf("%s\n",str);
    // calculate size
    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    char dep[size];
    for(int i=0; i<=size; i++){
        dep[i]=str[i];
    }
    printf("The deep copy of this->\n");
    printf("%s",dep);
    return 0;
}