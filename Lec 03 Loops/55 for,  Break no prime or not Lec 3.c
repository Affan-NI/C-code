#include<stdio.h>

int main()
{
//Ques : WAP to check if a number is prime or not.    
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=0;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
        a=1;
        break;
        }     
    }
    
    if(n==1)
    printf("no.is neither prime nor composite");
    else if(a==0)
    printf("given no.is prime");
    else
    printf("given no.is composite");
    return 0;
}