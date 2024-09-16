#include<stdio.h>
int main()
{
    float p;
    printf("p=");
    scanf("%f",&p);
    float r;
    printf("r=");
    scanf("%f",&r);
    float t;
    printf("t=");
    scanf("%f",&t);
    float si=p*r*t/100;
    printf("Simple interest=%f",si);
    
    

return 0;
}