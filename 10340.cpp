#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    char a[1000000],b[1000000],temp;
    int flag,i,j,n;
    while(scanf("%s %s",&a,&b)!=EOF){
        n=0;
        for(i=0;a[i]!='\0'; i++)
        {
            flag=0;
            for(j=n;b[j]!='\0'; j++)
            {
                if(a[i]==b[j])
                {
                    flag=1;
                    n=j+1;
                    break;
                }
            }
            if(flag==0)
                break;
        }
        if(flag==1)
            printf("Yes\n");
        else
            printf("No\n");
    }

}
