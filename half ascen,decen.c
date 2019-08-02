#include<stdio.h>
void half_ascen_descen(int arr[],int n)
{
    int i,j,temp,r,d;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    d=n/2;
    for(i=0;i<=d;i++)
    {
        printf("%d ",arr[i]);
    }
    if(i>d)
    {
        r=n-1;
        for(i=d+1;i<n;i++)
        {
            printf("%d ",arr[r]);
            r--;
        }
    }

}
int main()
{
    int n,arr[10],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    half_ascen_descen(arr,n);
    return 0;
}
