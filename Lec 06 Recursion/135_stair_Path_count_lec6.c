#include<stdio.h>
// zena(seedi) par chadne ke ways batao. if total padi n hai.
// conditation-> single step, double step(means ek padi chodkar).
int stair(int n){
    if(n==1 || n==2)return n;
    int totalways=stair(n-1)+stair(n-2);
    return totalways;
}
int main(){
    int n;
    printf("Enter a no. ");
    scanf("%d",&n);
    int ways=stair(n);
    printf("no. of ways is = %d",ways);
   return 0; 
}