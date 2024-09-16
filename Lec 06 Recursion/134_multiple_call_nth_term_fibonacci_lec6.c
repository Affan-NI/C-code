#include<stdio.h>
// 1 1 2 3 5 8 13......
int fibo(int n){
    if(n==1 || n==2)return 1;
    return fibo(n-1)+fibo(n-2); // multiple call lagia.
}
int main(){
    int n;
    printf("Enter a no. ");
    scanf("%d",&n);
    // int f=fibo(n);
    printf("%dth term of fibonacci is = %d",n,fibo(n));
   return 0; 
}