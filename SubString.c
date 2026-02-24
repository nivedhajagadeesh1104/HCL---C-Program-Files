#include<stdio.h>
int findSubstring(char str[],char sub[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        int j;
        for(j=0;sub[j]!='\0';j++)
        {
        if(str[i+j]!=sub[j])
        break;
        }
        if(sub[j]=='\0')
        return i;
    }
    return -1;
}
int main()
{
    char str[100],sub[100];
    scanf(" %[^\n]",str);
    scanf(" %[^\n]",sub);
    int index=findSubstring(str,sub);
    printf("%d",index);
}