#include<stdio.h>

int main()
{
    int a,b,i,j,k,r,m,l,n,q,s=1;
    scanf("%d",&n);
    for(q=1;q<=n;q++){
    scanf("%d%d",&a,&b);
    for(l=1;l<=b;l++){
    m=a-1;
    for(i=1; i<=((a*2)-1); i++)
    {
       if(i<=a){
                for(j=1; j<=i; j++)
        {
            printf("%d",i);
        }
       }
        else if(i>a)
        {
            {
                for(r=m; r>=1; r--)
                {
                    printf("%d",m);
                }
                m--;
            }
        }
        printf("\n");
    }
    if(q!=n || l!=b){
    printf("\n");
    }
    }
    }
return 0;
}
