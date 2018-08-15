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
int main(){
int m,n;
while(cin>>m>>n){
    vector<pair <int,int> >v;
    vector<int>res[200];
        int people[100],table[100],temp,order,flag;
    if(m==0 && n==0)
        break;
    for(int i=1;i<=m;i++){
        isc(people[i]);
        v.pb(mp(people[i],i));
    }
    sort(v.begin(),v.end());
    for(int i=1;i<=n;i++){
        isc(table[i]);
    }
    for(int i=m-1;i>=0;i--){
            temp=v[i].first;
            order=v[i].second;
            flag=0;
           // cout<<"value "<<temp;
        for(int j=1;j<=n;j++){
            if(table[j]>0 && temp!=0){
                table[j]--;
                temp--;
                res[order].pb(j);
               // cout<<"t- :"<<table[j]<<" ";
               // cout<<"va "<<temp<<" ";
            }
        }
        if(temp>0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<1<<endl;
    for(int i=1;i<=m;i++){
        for(int j=0;j<res[i].size();j++){
            if(j!=0)
            cout<<" ";
            cout<<res[i][j];
        }
        nl;
    }
    }
    else{
        cout<<0<<endl;
    }
//    for(int i=v.size()-1;i>=0;i--)
//        cout<<v[i].first<<" "<<v[i].second<<endl;
}
}
