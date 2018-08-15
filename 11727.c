#include<stdio.h>

int main()
{
    int a,b,c,t,n;
    scanf("%d",&n);
    for(t=1; t<=n; t++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if( (a>b && a<c) || (a>c && a<b) )
        {
            printf("Case %d: %d\n",t,a);
        }
        else  if( (b>a && b<c) || (b>c && b<a) )
        {
            printf("Case %d: %d\n",t,b);
        }
        else if((c>a && c<b) || (c>b && c<a))
        {
            printf("Case %d: %d\n",t,c);
        }
    }
    return 0;


}
