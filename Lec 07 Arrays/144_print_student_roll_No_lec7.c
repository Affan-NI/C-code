#include<stdio.h>
// 10 student hai unme jinke marks 35 se kam hai unka roll no print karana hai.arrays ki index unka roll no hai.
int main(){
    int marks[10];
    for(int i=0; i<=9; i++){
        printf("Enter marks of students: ");
        scanf("%d",&marks[i]);
    }
    printf("The roll no of those student who has got marks less than 35->\n");
    for(int i=0; i<=9; i++){
        int a=marks[i];
        if(a<35) printf("roll no\n: %d ",i);
    }
    return 0;
}