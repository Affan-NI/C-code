#include<Stdio.h>
int moves(int a,int n){
    if(n==0)return 1;
    return a*moves(a,n-1);
}
void tower(int n, char s, char h, char d){
    if(n==0)return;
    tower(n-1,s,d,h);
    printf("%c->%c\n",s,d);
    tower(n-1,h,s,d);
    return;
}
int main(){
    int n;
    printf("Enter a no. of disk : ");
    scanf("%d",&n);
    tower(n,'A','B','C');
    int minimum_MOves= moves(2,n) - 1;
    printf("minimum no. of moves is = %d",minimum_MOves);
    return 0;
}


