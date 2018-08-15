#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,e;
    while(scanf("%d%d%d%d",&a,&b,&c,&d))
    {
        if(a==0 && b==0 && c==0 && d==0)
            break;
        if(a<c)
        {
            if(b>=d)
            {
                e=((c-a)*60)-abs(d-b);
                printf("%d\n",e);
            }
            else
            {
                e=((c-a)*60)+abs(d-b);
                printf("%d\n",e);
            }
        }
        else if(a>c)
        {
            if(b>=d)
            {
                e=(((24-a)+c)*60)-abs(b-d);
                printf("%d\n",e);
            }
            else
            {
                e=(((24-a)+c)*60)+abs(b-d);
                printf("%d\n",e);

            }
        }
        else if(a==c)
        {
            if(b<=d)
            {
                e=((c-a)*60)+abs(d-b);
                printf("%d\n",e);
            }
            else
            {
                e=(((24-a)+c)*60)-abs(b-d);
                printf("%d\n",e);
            }
        }
    }
    return 0;


}
