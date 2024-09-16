// 117 ka 2nd method yeh or bhi accha hai.
#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n, int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n;
    printf("ENter n ");
    scanf("%d",&n);
     int r;
    printf("ENter r ");
    scanf("%d",&r);
    int ncr=combination(n,r);
    printf("%d",ncr);
    return 0;
}