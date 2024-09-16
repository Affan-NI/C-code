#include<stdio.h>
int main(){
// WAP to print out all armstrong numbers between 1 and 500.

int sum=0;
for(int i=1; i<=500; i++){
    int x=i;
    for(int j=1; x>0; j++){
    
    int lastdigit=x%10;
        sum=sum+lastdigit*lastdigit*lastdigit;
    x=x/10;}
    x=i;
    if(sum==x){
    printf("%d is a armstrong no.\n",x);
    }
    sum=0;
    
    
}
    return 0;
}