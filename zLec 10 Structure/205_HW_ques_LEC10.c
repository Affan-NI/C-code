#include<stdio.h>
#include<string.h>
int main(){
    struct person {
        char name[30];
        int salary;
        int age;
    }first,sec; 
    strcpy(first.name,"Raghav");
    sec.age=40;
    printf("%s\n",first.name);
    printf("%d",sec.age);

    return 0;
}