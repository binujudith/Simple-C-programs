#include<stdio.h>
int main()
{
    int arr[10],i,j,freq[10],count,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        {
           freq[i]=count;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(freq[i]==1)
        {
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;

}
