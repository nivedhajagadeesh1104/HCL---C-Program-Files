#include<stdio.h>
int main()
{
    char src[100];
    char dest[10];
    scanf(" %[^\n]",src);
    int size=sizeof(dest);
    int i = 0;
    while(i<size && src[i]!='\0')
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
    printf("%s",dest);
}