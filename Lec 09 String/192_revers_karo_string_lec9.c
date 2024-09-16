#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("ENter a string");
    scanf("%[^\n]s",str);
    printf("The size of this input : ");
    // size of jo hamne input lia hai.
    int size=0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    printf("%d\n",size);
    for(int i=0, j=size-1; i<=j; i++, j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("the revers string is ");
    puts(str);


    return 0;
}