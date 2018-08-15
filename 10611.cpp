#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,i,j,m,a[100000],b[100000],temp=0,temp2=21474836490;
    unsigned long long int flag=0,flag2=0,store,store2;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>b[i];
    }
    for(j=0; j<m; j++)
    {
        flag=0,flag2=0;
        temp=0,temp2=21474836490;
        for(i=0; i<n; i++)
        {
            if(a[i]<b[j])
            {
                if(a[i]>temp)
                {
                    store=a[i];
                    flag=1;
                    temp=a[i];
                }
            }
            if(a[i]>b[j])
            {
                if(a[i]<temp2)
                {
                    store2=a[i];
                    flag2=1;
                    temp2=a[i];
                }
            }
        }
            if(flag==1)
                cout<<store;
            else
                cout<<"X";
            if(flag2==1)
                cout<<" "<<store2;
            else
                cout<<" X";

            cout<<endl;




    }
    }
