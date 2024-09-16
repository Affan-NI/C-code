#include<stdio.h>

int main()
{
//Ques: Given three points (x1,y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.
int x1,y1,x2,y2,x3,y3;
printf("Enter coordinat of three point: \n" );
scanf("%d %d",&x1,&y1); 
printf("(x1,y1)=(%d,%d)\n",x1,y1);
scanf("%d %d",&x2,&y2); 
printf("(x2,y2)=(%d,%d)\n",x2,y2);
scanf("%d %d",&x3,&y3); 
printf("(x3,y3)=(%d,%d)\n",x3,y3);

 float m1=(y2-y1)/(x2-x1);// slope of AB
 float m2=(y3-y2)/(x3-x2);//slope of BC
if(m1==m2){
    printf("points are collinear");
}
else{
printf("points are noncolinear");
}


     return 0;
}