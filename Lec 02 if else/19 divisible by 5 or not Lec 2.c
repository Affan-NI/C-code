#include<stdio.h>
int main()
{
// Take positive integer input and tell if it divisible by 5 or not.

    int n;
    printf("Enter a integer");
    scanf("%d",&n);
    if(n%5==0){
   
        printf("divisible by 5"); 
       }
    else{
        printf("not divisible by 5");
    }
    
return 0;
}