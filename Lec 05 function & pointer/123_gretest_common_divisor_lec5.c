#include<stdio.h>
// write a function to compute the greatest common divsor of two givn no.
// arthaat hume HCF nikalna hai.
int min(int n, int m){
    if(n<m) return n;
    else return m;
}
int gcd(int n,int m){
    int hcf;
    for(int i=min(n,m); i>=1; i--){
        if(n%i==0 && m%i==0){
            hcf=i;
            break;
        }
    }
    return hcf;
}
int main(){
    int n;
    printf("ENTer 1st no. ");
    scanf("%d",&n);
    int m;
    printf("ENTer 2nd no. ");
    scanf("%d",&m);
    int hcf=gcd(n,m);
    printf("The HCF/GCD of %d and %d is %d",n,m,hcf);
    return 0;
}