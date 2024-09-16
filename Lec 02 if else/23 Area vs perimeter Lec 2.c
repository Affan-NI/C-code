#include<stdio.h>
int main()
{
//Ques: Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.

    int l; printf("Enter length: ");
    scanf("%d",&l);
    int b; printf("Enter breath: ");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if(a>p){
        printf("Area is greater than perimeter ");
    }
    if(a==p){
        printf("Area is equal to perimeter ");
    }
    if(a<p){
        printf("Area is not greater than perimeter");
    }
    return 0;
}