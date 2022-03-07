#include<stdio.h>
int main()
{
    int num,a,i;
    scanf("%d",&num);
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%2!=0)
        printf("%d x %d = %d
",num,i,(num*i));
    }
}