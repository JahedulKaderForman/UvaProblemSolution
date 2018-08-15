#include<stdio.h>
#include<string.h>
int main()
{
    char s[120],a[120],b[]="LEFT",c[]="RIGHT",d[]="SAME AS";
    long int n,sum=0,i,p,k[120],num,len,dec=0,rev=0,q=1,j;
    scanf("%ld",&p);
    while(p--){
            sum=0;
        scanf("%ld",&n);
        scanf("%c",&s);
        for(i=1; i<=n; i++)
        {
            rev=0;
            gets(a);
            if(a[0]=='L')
            {
                k[i]=-1;
            }
            else if(a[0]=='R')
            {
                k[i]=1;
            }
            else
            {
                dec=0;
                len=strlen(a);
                for(j=1; j<len; j++)
                {
                    if(j>=8)
                    dec = dec * 10 + ( a[j] - '0' );
                }
                k[i]=k[dec];
            }
            sum=sum+k[i];
           }
            printf("%ld\n",sum);
    }
    return 0;
}
