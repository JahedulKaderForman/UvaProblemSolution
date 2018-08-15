#include<bits/stdc++.h>
using namespace std;
unsigned long long int p[10]= {6,28,496,8128,33550336,8589869056,137438691328,2305843008139952128};
int a[10]= {2,3,5,7,13,17,19,31};
int mark[100];
vector<int>prime;
void seive()
{
    int limit=sqrt(50);
    for(int i=4; i<=50; i+=2)
    {
        mark[i]=1;
    }
    prime.push_back(2);
    for(int i=3; i<=50; i+=2)
    {
        if(!mark[i])
        {
            prime.push_back(i);
            if(i<=limit)
            {
                for(int j=i+i; j<=50; j+=i)
                {
                    mark[j]=1;
                }
            }
        }
    }
}
int main()
{
    int n;
    seive();
    while(cin>>n)
    {
        if(n==0)
        break;
        int flag=0,flag2=0;
        for(int i=0; i<10; i++)
        {
            if(n==a[i])
            {
                flag=1;
                cout<<"Perfect: "<<p[i]<<"!"<<endl;
                break;
            }
        }
        if(flag==0)
        {
            for(int i=0; i<prime.size(); i++)
            {
                if(n==prime[i])
                {
                    cout<<"Given number is prime. But, NO perfect number is available."<<endl;
                    flag2=1;
                    break;
                }
            }
        }
        if(flag2==0 && flag==0)
        {
            cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
        }

    }

}
