#include<stdio.h>
int main()
{
// Ques. Take positive float input and print the fractional part of the real no.
    float x;
    printf("Enter a real no.="); 
    scanf("%f",&x);
    int y;
    y=x; // y is a GIF of x.
    float z=x-y;
    printf("Fractional part of this real no. is %f",z);


return 0;
}