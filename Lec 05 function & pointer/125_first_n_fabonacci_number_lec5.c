#include<stdio.h>
int fabo(int a,int b, int sum, int n){
     a=1, b=1,sum=a+b; 
    for(int i=3; i<=n; i++){ 
      printf("%d ",sum);  
      a=b;
      b=sum;
      sum=a+b;  
    }
    return sum;
}

int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    if(n==1) printf("1 ");
    if(n==2) printf("1 1 ");
    if(n>=3) printf("1 1 ");
    int a,b,sum;
    sum=fabo(a,b,sum,n);  
    return 0;
}