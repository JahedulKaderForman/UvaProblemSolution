#include<stdio.h>

int main()
{

    long int a,b,c,e,f,sum;
    while(scanf("%ld%ld",&a,&b)!=EOF)
    {
        if(b<=1){
                printf("%ld\n",a);
        }
        else{
        sum=a;
        c=a;
        while(c>=b)
        {
            e=c/b;
            f=c%b;
            c=e+f;
            sum=sum+e;
        }
        printf("%ld\n",sum);
        }
    }

    return 0;
}
