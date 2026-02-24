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
    if(b==0){
    printf("Divide by zero error");
    return 0;
    }
    return a/b;
}
int main(){
    int (*operation[4])(int,int)={add,sub,mult,div};
    while(1){
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
    int op;
    scanf("%d",&op);
    if(op==5)
    break;
    if(op<1 || op>4){
    printf("Invalid choice\n");
    continue;
    }
    printf("Enter 2 numbers: ");
    int a,b;
    scanf("%d %d",&a,&b);
    int ans=operation[op-1](a,b);
    printf("%d\n",ans);
    }
}