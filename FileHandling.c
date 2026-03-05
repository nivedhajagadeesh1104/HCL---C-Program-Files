#include<stdio.h>
int main(){
FILE *fp1,*fp2;
int n,num;
fp1=fopen("input.txt","w");
printf("Enter number of integers:");
scanf("%d",&n);
printf("Enter numbers:\n");
for(int i=0;i<n;i++){
    scanf("%d",&num);
    fprintf(fp1,"%d ",num);
}
fclose(fp1);
fp1=fopen("input.txt","r");
fp2=fopen("output.txt","w");
while(fscanf(fp1,"%d",&num)!=EOF){
    fprintf(fp2,"%d ",num);
}
fclose(fp1);
fclose(fp2);
printf("Numbers written to input.txt and copied to output.txt");
}