#include<stdio.h>
struct employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct employee e[10],high;
    for(int i=0;i<10;i++)
        scanf("%d%s%f",&e[i].id,e[i].name,&e[i].salary);
    float total=0;
    high=e[0];
    for(int i=0;i<10;i++)
    {
        total+=e[i].salary;
        if(e[i].salary>high.salary)
            high=e[i];
    }
    printf("Total Salary: %.2f\n",total);
    printf("Highest Salary: %d %s %.2f",high.id,high.name,high.salary);
}
