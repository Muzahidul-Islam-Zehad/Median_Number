#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d", &a,&b,&c);
        if(b>a && b<c)
        {
            printf("%d\n",b);
        }
        if(c>a && c<b)
        {
            printf("%d\n",c);
        }
        if(a>b && a<c)
        {
            printf("%d\n",a);
        }
        if(a<b && a>c)
        {
            printf("%d\n",a);
        }
        if(c<a && c>b)
        {
            printf("%d\n",c);
        }
        if(b<a && b>c)
        {
            printf("%d\n",b);
        }
    }
    return 0;
}