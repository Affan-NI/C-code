#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("ENter n ");
    scanf("%d",&n);
     int r;
    printf("ENter r ");
    scanf("%d",&r);
    int nfact=factorial(n);         // nfact=n!
    int rfact=factorial(r);          // rfact=r!
    int nrfact=factorial(n-r);      //nrfact=(n-r)!
    int ncr=nfact/(rfact*nrfact);
    //  int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",ncr);
    return 0;
}