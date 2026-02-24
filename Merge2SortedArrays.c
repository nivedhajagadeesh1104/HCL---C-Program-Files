#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    int *a1=(int*)malloc(a*sizeof(int));
    for(int i=0;i<a;i++)
    scanf("%d",&a1[i]);
    scanf("%d",&b);
    int *b1 =(int*)malloc(b*sizeof(int));
    for(int i=0;i<b;i++)
    scanf("%d",&b1[i]);
    int i=0,j=0;
    int n=a+b,k=0;
    int *c1 = (int *)malloc(n * sizeof(int));
    while(i<a && j<b){
        if(a1[i]<b1[j]){
            c1[k]=a1[i];
            i++;
        }
        else{
            c1[k]=b1[j];
            j++;
        }
        k++;
    }
    while(i<a){
        c1[k]=a1[i];
        i++;
        k++;
    }
    while(j<b){
        c1[k]=b1[j];
        j++;
        k++;
    }
    for(int i=0;i<n;i++)
    printf("%d ",c1[i]);
    free(a1);
    free(b1);
    free(c1);
}