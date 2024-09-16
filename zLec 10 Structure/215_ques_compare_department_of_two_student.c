// Creat a structure of student have some attribute are follwing.creat a function to check have same department or not.
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct student{
    int rollno;
    char ch[20];
    char dept[20];
    char course[30];
    int year;
}student;
bool flag=true;
void check(student s1, student s2){
    strcpy(s1.dept,"CSE");
    strcpy(s2.dept,"ECE");
    for(int i=0; i<20 && s1.dept[i]!='\0'; i++){
        printf("%c %C \n",s1.dept[i],s2.dept[i]);
         if(s1.dept[i]!=s2.dept[i]) flag=false;
    }
    if(flag==true) printf("Have same department");
    else printf("Have different depatment");
    return;

}
int main(){
    student s1,s2;
    check(s1,s2);

    return 0;
}