#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a no.");
    scanf("%d",&n);
    int m;
    printf("Enter 2nd no.");
    scanf("%d",&m);
    int power=pow(n,m);
    printf("%d to the power %d is: %d",n,m,power);
    return 0;
}