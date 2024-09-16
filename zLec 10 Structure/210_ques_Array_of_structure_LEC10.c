#include<stdio.h>
#include<string.h>
int main(){
    typedef struct crickter{
        char firstname[20];
        char lastname[20];
        int age;
        int match;
        float avgrun;
    }crickter;
    crickter arr[3];
    for(int i=0; i<3; i++){
        printf("About %dth crickter\n",i+1);
        scanf("%s",arr[i].firstname);
        scanf("%s",arr[i].lastname);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].match);
        scanf("%f",&arr[i].avgrun);
    }
    for(int i=0; i<3; i++){       
        printf("Name : %s %s\n",arr[i].firstname,arr[i].lastname);        
        printf("Age : %d\n",arr[i].age);
        printf("No of match : %d\n",arr[i].match);
        printf("Avg run : %f\n\n",arr[i].avgrun);
    }
    return 0;
}