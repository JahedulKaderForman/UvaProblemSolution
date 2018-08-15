#include<stdio.h>

int main()
{
    int a;
    freopen("t.in","r",stdin);
    freopen("t.out","w",stdout);
    while((scanf("%d",&a)!=EOF)){
          if((a%4==0 && a%100!=0)||(a%400==0))
        {
        if(a%15==0)
        {
            printf("This is leap year.\nThis is huluculu festival year.");
        }
        else if(a%55==0)
        {
            printf("This is leap year.\nThis is bulukulu festival year.");
        }
        else if(a%15==0 && a%55==0)
        {
            printf("This is leap year.\nThis is huluculu festival year.\nThis is bulukulu festival year.");
        }
        else
        {
            printf("This is leap year.");
        }
    }
    else if(a%55==0)
    {
        printf("This is bulukulu festival year.");
    }
    else if(a%15==0)
    {
        printf("This is huluculu festival year.");
    }
    else{
        printf("This is an ordinary year.");
    }
        printf("\n");
    }
    return 0;
}
