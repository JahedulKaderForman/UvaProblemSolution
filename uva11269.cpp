#include <bits/stdc++.h>
#define ft    int t; scanf("%d", &t); for(int c=1; c<=t; c++)
#define nl printf("\n")
#define pb(a) push_back(a)
#define sz(a) sizeof(a)
#define setz(a) memset(a, 0, sizeof(a))
#define setneg(a) memset(a, -1, sizeof(a))

#define isc(a) scanf("%d", &a)
#define isc2(a,b) scanf("%d%d", &a,&b)
#define isc3(a,b,c) scanf("%d%d%d", &a,&b,&c)
#define lsc(a) scanf("%ld", &a)
#define lsc2(a,b) scanf("%ld%ld", &a,&b)
#define llsc(a) scanf("%lld", &a)
#define llsc2(a,b) scanf("%lld%lld", &a, &b)
#define llsc3(a,b,c) scanf("%lld%lld%lld", &a, &b, &c)
#define ullsc(a) scanf("%llu", &a)
#define ullsc2(a,b) scanf("%llu%llu", &a, &b)

#define ipf(a) printf("%d", a)
#define lpf(a) printf("%ld", a)
#define llpf(a) printf("%lld", a)

#define dsc(a) scanf("%lf", &a)

#define dpf2(a) printf("%.2f", a)
#define dpf3(a) printf("%.3f", a)

#define spf(a) printf("%s", a)
#define spf(a) printf("%s", a)

//Case printing
#define casepf(a) printf("Case %d:", a)
#define casestr(a, b) printf("Case %d: %s\n", a,b)

#define fl(a) floor(a)
#define cl(a) ceil(a)

#define mp(a,b) make_pair(a,b)
using namespace std;


typedef pair<int, int> pii;
typedef long long LL;
typedef pair<LL, LL> pLL;
typedef unsigned long long uLL;

template <class T>
inline T gcd(T x,T y)
{
    T mod;
    while(x%y)
    {
        mod = x%y;
        x = y;
        y = mod;
    }
    return y;
}

int kdx[] = {2,2,-2,-2,1,-1,1,-1};
int kdy[] = {1,-1,1,-1,2,2,-2,-2};

int edx[] = {1,-1,0,0,1,1,-1,-1};
int edy[] = {0,0,1,-1,1,-1,1,-1};

int fdx[] = {1,-1,0,0};
int fdy[] = {0,0,1,-1};
int main()
{
    int a[30],b[30],n,start[30],finish[30],machinA[30],mini,index;
    while(cin>>n)
    {
        pair<int,int>s;
        pair<int,int>f;
        for(int i=0; i<n; i++)
        {
            isc(a[i]);
            s=mp(i,a[i]);
        }
        for(int i=0; i<n; i++)
        {
            isc(b[i]);
            f=mp(i,a[i]);
        }


        int x=0,y=n-1;
        for(int j=0; j<n; j++)
        {
            mini=1000000;
            int flag=0;
            for(int i=0; i<n; i++)
            {
                if(a[i]<mini && a[i]!=-1)
                {
                    mini=a[i];
                    index=i;
                    flag=1;
                }
                if(b[i]<mini && b[i]!=-1)
                {
                    mini=b[i];
                    index=i;
                    flag=2;
                }

            }
            if(flag==1)
            {
                start[x]=a[index];
                finish[x]=b[index];
                x++;
            }
            else
            {
                start[y]=a[index];
                finish[y]=b[index];
                y--;
            }
            a[index]=-1;
            b[index]=-1;
        }
        int res=0;
        machinA[0]=start[0];
        for(int i=1; i<n; i++)
        {
            machinA[i]=start[i]+machinA[i-1];
        }
        res+=machinA[0]+finish[0];
        for(int i=1; i<n; i++)
        {
           if(machinA[i]>res){
            res+=finish[i]+(machinA[i]-res);
           }
           else{
            res+=finish[i];
           }
        }
        cout<<res<<endl;

    }


}
