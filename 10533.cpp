#include<bits/stdc++.h>
int n=1000002;
int mark[1000002];
void prime()
{
    int limit=sqrt((n*1.0)+2);
    mark[1]=1,mark[0]=1;
    for(int i=4; i<=n; i+=2)
    {
        mark[i]=1;
    }
    mark[2]=0;
    for(int i=3; i<=n; i+=2)
    {
        if(mark[i]==0)
        {
            mark[i]=0;
            for(int j=2; i*j<=n; j++)
            {
                mark[i*j]=1;
            }
        }

    }
}
int main()
{
    prime();
    int n,a,b,cn,temp,sum;
    scanf("%d",&n);
    while(n--)
    {
        cn=0;
        scanf("%d%d",&a,&b);
        for(int i=a; i<=b; i++)
        {
            sum=0;
            if(mark[i]==0)
            {
                temp=i;
                while(temp!=0)
                {
                    sum+=temp%10;
                    temp=temp/10;
                }
                if(mark[sum]==0)
                {
                    cn++;
                }
            }
        }
        printf("%d\n",cn);
    }

}

