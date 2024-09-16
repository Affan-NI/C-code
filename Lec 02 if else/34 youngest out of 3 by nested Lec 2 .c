#include<stdio.h>

int main()
{
// HW: If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.
// using nested if else.
    int r;
    printf("Enter Ram's age: ");
    scanf("%d",&r);
    int s;
    printf("Enter Shayam's age: ");
    scanf("%d",&s);
    int a;
    printf("Enter Ajay's age: ");
    scanf("%d",&a);
if(r<s){
    if(r<a){
    printf("Ram is youngest");
    }
    else{
    printf("Ajay is youngest");
    }
}
else{ // it means s<r
    if(s<a){
    printf("Shayam is youngest");
    }
    else{
    printf(" Ajay is youngest");
    }

}



    return 0;
}