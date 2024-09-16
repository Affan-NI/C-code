#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0) return 1;
    int recans=n*factorial(n-1);
    return recans;
}
int main(){
    int n;
    printf("Enter a no. ");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("The factorial of %d is: %d",n,fact);
   return 0; 
}