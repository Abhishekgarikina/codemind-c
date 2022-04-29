#include<stdio.h>
int main()
{
    int a,r,rev=0;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        a=a/10;
        rev=rev*10+r;
        
    }
    printf("%d",rev);
}