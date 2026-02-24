#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isArmstrong(int n)
{
    int temp=n,r,sum=0,ct=0;
    while(temp>0)
    {
        ct++;
        temp=temp/10;
    }
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        sum=sum+pow(r,ct);
        temp=temp/10;
    }
    if(sum==n)
        return true;
    else
        return false;
}
bool isPerfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0)
        sum+=i;
    }
    return sum==n;
}
int main(){
    int n;
    scanf("%d",&n);
    bool arms=isArmstrong(n);
    bool perf=isPerfect(n);
    if(arms && perf)
    printf("Armstrong and Perfect");
    else if(arms)
    printf("Armstrong");
    else if(perf)
    printf("Perfect");
    else
    printf("Neither Armstrong nor Perfect");
}
