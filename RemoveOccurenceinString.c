#include<stdio.h>
int main()
{
    char s[100],ch;
    scanf("%[^\n]",s);
    scanf(" %c",&ch);
    int i=0,j=0;
    while(s[i]!='\0')
    {
    if(s[i]!=ch)
    {
        s[j]=s[i];
        j++;
    }
    i++;
    }
    s[j]='\0';
    printf("%s",s);
}