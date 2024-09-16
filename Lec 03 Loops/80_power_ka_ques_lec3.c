#include<stdio.h>
int main(){
// 2^n ko is trha express karo 2^1, 2^2, 2^3,........2^n
    int a;
    printf("Enter value of a = ");
    scanf("%d",&a);
    int b;
    printf("Enter value of b = ");
    scanf("%d",&b);
    int product=1;
    for(int i=1; i<=b; i++){
        product=product*a;
        printf("%d^%d = %d\n",a,i,product);
    }
    
    return 0;
}