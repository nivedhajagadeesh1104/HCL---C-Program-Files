#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
long long f=1;
if(n==0)
printf("1");
else{
for(int i=n;i>=1;i--){
    f*=i;
}
printf("%lld",f);
}
}
