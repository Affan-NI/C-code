#include<stdio.h>
int main(){
    int a;
    printf("Enter value of a = ");
    scanf("%d",&a);
    int b;
    printf("Enter value of b = ");
    scanf("%d",&b);
    int product=1;
    for(int i=1; i<=b; i++){
        product=product*a;
    }
    printf("Value of %d to the power %d = %d",a,b,product);
    return 0;
}
