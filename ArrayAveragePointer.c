#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float a[100];
    for(int i=0;i<n;i++)
        scanf("%f",&a[i]);
    float sum=0,*p=a;
    for(int i=0;i<n;i++)
        sum+=*(p+i);
    printf("%.2f",sum/n);
}