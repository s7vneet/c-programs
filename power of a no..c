#include<stdio.h>
void main()
{
    int x=1,i,n,m;
    printf("input number=");
    scanf("%d",&m);
    printf("input power of the no.=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=x*m;
    }
    printf("answer is %d",x);

}
