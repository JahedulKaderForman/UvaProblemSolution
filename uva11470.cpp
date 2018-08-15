#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[100][100],visited[100][100],n,temp,st;
int main()
{
    int m=0;
    while(cin>>n)
    {
        if(n==0)
            break;
        memset(visited,0,sizeof(visited));
         temp=ceil(n*1.0/2);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }

        st=n-1;
        m++;
        printf("Case %d:",m);
        for(int k=0; k<temp; k++)
        {
            ll sum=0;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(i==k || i==k+st || j==k || j==k+st)
                    {
                        if(visited[i][j]==0){

                            sum+=a[i][j];
                            visited[i][j]=1;
                        }

                    }

                }


            }


           cout<<" "<<sum;
             st-=2;

        }
        cout<<endl;

    }
}
