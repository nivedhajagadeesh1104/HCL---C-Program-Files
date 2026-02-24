#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    int f=1;
    if(str[n-1]=='\n')
    n--;
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1]){
            f=0;
            break;
        }
    }
    if(f==1)
    printf("Palindrome");
    else
    printf("Not a Palindrome");
}