#include<stdio.h>
int main()
{
    int a[100],sum=0,n,i,avg,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=(sum)/n;
    flag=0;
    for(i=0;i<n;i++)
    {
        if(avg==a[i])
        {
            flag=1;
        }
    }
    if(flag>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}