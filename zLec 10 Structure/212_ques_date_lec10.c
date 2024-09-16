#include<stdio.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    }date;
    date a,b;
    //  a->16/07/2023
    // b ->16/07/2023
    a.day=16;
    a.month=7;
    a.year=2023;

    b.day=16;
    b.month=7;
    b.year=2023;

    // hum yha if me a==b kare compaer nhi kar sakte hai.

    bool flag=true;
    if(a.day!=b.day) flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year) flag=false;

    if(flag==true) printf("The dates are same");
    else printf("The dates are different");

    return 0;
}