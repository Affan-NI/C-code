#include<stdio.h>
int main(){
// 1-2+3-4+5-6+.....n term
    int n;
    printf("Enetr no. of term ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1; i<=n; i++){
        if(i%2!=0)
            sum=sum+i;      // shru me sum 0 tha fir isme 1 add hua
        else                // fir sum arthat 1 me se 2 subtract hua ise traha chalta rha.
            sum=sum-i;
    }
    printf("sum of serise is %d",sum);
    
    
    return 0;
}