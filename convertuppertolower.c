#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,ch;
    char *str="BINU";
    while(str[i]!='\0')
    {
        ch=str[i];
        printf("%c",ch+32);
        i++;
    }
    return 0;

}
