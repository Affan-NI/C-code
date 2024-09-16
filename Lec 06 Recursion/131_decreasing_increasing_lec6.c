#include<Stdio.h> 
void increasing(int n){
    if(n==0) return;     // base case
    printf("%d\n",n);   
    increasing(n-1);    // call lagia
    printf("%d\n",n);   //code
    return; 
}
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    increasing(n);
    return 0;
}