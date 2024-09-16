#include<stdio.h>

int main()
{
//Ques: If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
    int cp;// cp= cost price
    printf("Enter cost price: ");
    scanf("%d",&cp);
    int sp;// sp= selling price
    printf("Enter selling price: ");
    scanf("%d",&sp);
    if(cp<sp){
        int p=sp-cp;
        printf("profit=%d",p);
    }
    if(cp>sp){
        int l=cp-sp;
        printf("loss=%d",l);
    }
    if(cp==sp){
    
        printf("no profit no loss");
    }
    
    
    
    return 0;
}