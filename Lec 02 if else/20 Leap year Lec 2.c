#include<stdio.h>
int main()
{
// leap year hone ka code and na hone ka code likho.
// 2000 ek leap year tha 
    int y;
    printf("Enter a year: ");
    scanf("%d",&y);
    if(y%4==0){
    
     printf("This  year is leap year",y);
    }
    else {
    
        printf("This year is not a leap year");
    }

return 0;
}