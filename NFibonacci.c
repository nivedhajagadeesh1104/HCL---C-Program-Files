#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a=0,b=1,curr;
for(int i=1;i<=n;i++)
{
printf("%d ",a);
curr=a+b;
a=b;
b=curr;
}
}
