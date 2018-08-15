#include<stdio.h>
#include<iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;
int main()
{
    char a[1000],n[1000];
    long long int i,temp=0,x,len,c[100000],j;
    scanf("%s%s",&a,&n);
    strrev(a);
    len=strlen(a);
    for(i=0;i<len;i++){
        x=((a[i]-'0')*atoi(n))+temp;
        cout<<x<<endl;
        c[i]=x%10;
        temp=x/10;
        cout<<temp<<endl;
    }
    while(temp!=0){
            cout<<temp<<endl;
        c[i]=temp%10;
          i++;
        temp=temp/10;
    }
    for(j=i-1;j>=0;j--)
        cout<<c[j];

}
