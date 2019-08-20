#include<stdio.h>
int main()
{
    int i,j,n,a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]=='\0')
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='\0';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]=='\0')
        {
            continue;
        }
        printf("%d ",a[i]);
    }
    return 0;
}
