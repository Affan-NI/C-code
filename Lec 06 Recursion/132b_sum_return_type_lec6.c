#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return n;
    int recans=n+sum(n-1);
    return recans;
}
int main(){
    int n;
    printf("Enter a no. ");
    scanf("%d",&n);
    int fact=sum(n);
    printf("sum= %d",fact);
   return 0; 
}