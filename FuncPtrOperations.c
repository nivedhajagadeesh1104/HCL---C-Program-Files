#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mult(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    char op;
    scanf(" %c",&op);
    int (*operation)(int,int);
    if(op=='+')
    operation=add;
    else if(op=='-')
    operation=sub;
    else if(op=='*')
    operation=mult;
    else if(op=='/')
    operation=div;
    else
    {
        printf("Invalid operator");
        return 0;
    }
    int ans=operation(a,b);
    printf("%d",ans);

}