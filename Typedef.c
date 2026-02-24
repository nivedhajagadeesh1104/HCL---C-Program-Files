#include<stdio.h>
typedef struct{
    int id;
    char name[50];
    float salary;
}Employee;
int main(){
    Employee e[10];
    for(int i=0;i<10;i++){
        scanf("%d%s%f",&e[i].id,&e[i].name,&e[i].salary);
    }
    for(int i=0;i<10;i++){
        printf("%d %s %.2f\n",e[i].id,e[i].name,e[i].salary);
    }
}