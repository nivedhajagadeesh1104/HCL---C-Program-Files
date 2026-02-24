#include<stdio.h>
enum status{PENDING,SHIPPED,DELIVERED};
int main()
{
    enum status s;
    int st;
    scanf("%d",&st);
    s=st;
    if(s==PENDING)
        printf("PENDING");
    else if(s==SHIPPED)
        printf("SHIPPED");
    else if(s==DELIVERED)
        printf("DELIVERED");
    else
    printf("Invalid");
}
