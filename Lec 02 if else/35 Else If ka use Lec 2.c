#include<stdio.h>
int main()
{
// grade print Karo percentage se.
    //n>80 to A grade
    // n>60 B grade
    // n>40 C grade
    // less than 40 D grade.
    int n;
    printf("Enter percentage: ");
    scanf("%d",&n);
if(n>80){
    printf(" A grade ");
}
else if(n>60){
    printf("B grade ");  
}
else if(n>40){
    printf("C grade");
}
else{
printf("D grade ");
}
    
 
return 0;
}