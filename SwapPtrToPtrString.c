#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char **p1,char **p2){
    char *temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{
    char* str1=malloc(50*sizeof(char));
    char* str2=malloc(50*sizeof(char));
    strcpy(str1,"NIVEDHA");
    strcpy(str2,"nivedha");
    swap(&str1,&str2);
    printf("After swap:\n");
    printf("%s\n",str1);
    printf("%s",str2);
    free(str1);
    free(str2);
}