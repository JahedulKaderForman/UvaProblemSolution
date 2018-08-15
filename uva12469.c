#include<stdio.h>

int main()
{
    int a,b,c,d;
    while(scanf("%d%d",&a,&b))
    {
        if(a==-1 && b==-1)
            break;
        if(a<b)
        {
            c=b-a;
            d=(100-b)+a;
            if(c>d)
            {
                printf("%d\n",d);
            }
            else
            {
                printf("%d\n",c);
            }
        }
        else
        {
            c=a-b;
            d=(100-a)+b;
            if(c>d)
            {
                printf("%d\n",d);
            }
            else
            {
                printf("%d\n",c);
            }
        }
    }
return 0;
}
