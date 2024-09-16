#include<stdio.h>
int factorial(int x){
    int a=1;
    for(int j=1; j<=x; j++)
      a=a*j;
    return a;
}
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
       int f=factorial(i);
        printf("factorial of %d is %d\n",i,f);
    }
    return 0;
}