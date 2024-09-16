#include<stdio.h>

int main()
{
// HW: If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.

    int r;
    printf("Enter Ram's age: ");
    scanf("%d",&r);
    int s;
    printf("Enter Shayam's age: ");
    scanf("%d",&s);
    int a;
    printf("Enter Ajay's age: ");
    scanf("%d",&a);
if(r<s&& r<a){
printf("Ram is the youngest ");
}
if(s<r&& s<a){
printf("Shayam is the youngest ");
}
if(a<s&& a<r){
printf("Ajay is the youngest ");
}



    return 0;
}