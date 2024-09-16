#include<Stdio.h> 
void decreasing(int n){
    if(n==0) return;
    printf("Good Morning\n");     
    decreasing(n-1);
    return;
}
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}