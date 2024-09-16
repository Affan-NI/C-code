#include<stdio.h>
int main(){
    int a=5;
    int* x=&a;
    int** y=&x;
    int*** z=&y;        // triple pointer me double pointer ka adderres  store karte hai 
    printf("%d\n",a);
     printf("%d\n",*x);
      printf("%p\n",*y);  // %p se aderres print karte hai.
     printf("%d\n",**y);
      printf("%d\n",***z);

    return 0;
}