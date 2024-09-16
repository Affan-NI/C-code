#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a no. ");
    scanf("%d",&n);
    int root=sqrt(n);
    printf("The square root of %d is: %d",n,root);
    return 0;
}