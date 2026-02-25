#include<stdio.h>
int array(int arr[9][9]){
    for(int i=0;i<9;i++){
        int seen[10]={0};
        for(int j=0;j<9;j++){
            int num=arr[i][j];
            if(num<1 || num>9 || seen[num]==1)
            return 0;
            seen[num]=1;
        }
    }
    return 1;
}
int main(){
    int arr[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    if(array(arr)==1)
    printf("VALID\n");
    else
    printf("INVALID\n");
}