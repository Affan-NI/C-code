#include<stdio.h>
int powerlog(int a, int b){
    if(b==0) return 1;
    int x=powerlog(a,b/2);
    if(b%2==0)
        return x*x;         // a=2 b=4      2^4=2^2*2^2;
    else
        return x*x*a;       //a=2 b=5       2^5=2^(b/2)*2^(b/2)*2
}
int main(){
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    int b;
    printf("Enter b: ");
    scanf("%d",&b);
    int p=powerlog(a,b);
    printf("%d to the power %d is: %d",a,b,p);
    return 0;
}