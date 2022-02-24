#include<stdio.h>
int main()
{
int n,r,rev=0;
scanf("%d",&n);
while(n!=0)
{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
printf("%d",rev);

}
//void main()
//{
//int n,r,rev=0;
//scanf("%d",&n);
//while(n!=0)//1
//{
//	r=n%10;//1
//	rev=rev*10+r;//321
//	n=n/10;//0
//}
//printf("%d",rev);

//}