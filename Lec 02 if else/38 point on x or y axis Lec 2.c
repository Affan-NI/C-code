#include<stdio.h>
int main()
{
//Ques: Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin,

    int x,y;
    printf("Enter coordinat of a point: ");
    scanf("%d %d",&x,&y);
if(y==0){
    if( x!=0){
    printf("point lies on x-axis ");
    }
    else{
    printf("point lies on origin");
    }
}
else if(x==0){
    printf("point lies on y-axis");
}
else{
 printf("point doesn't lie on x or y axis");
}


return 0;
}