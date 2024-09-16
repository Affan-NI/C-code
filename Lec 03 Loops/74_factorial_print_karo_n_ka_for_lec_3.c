#include<stdio.h>
int main(){
// print the factorial of a given no.'n'.
    int n;
    printf("Enter a no.");
    scanf("%d",&n);
    int product=1;
    for(int i=1; i<=n; i++){
        product=product*i;
    }
    printf("factorial of this no. is %d",product);

    return 0;
}