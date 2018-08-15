#include <bits/stdc++.h>

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
vector<int>prime;
int mark[1000002];
int arr[100005];
void sieve(int n){
int i,j,limit=sqrt(n*1.0)+2;
mark[1]=1;
for(int i=4;i<=n;i+=2){
    mark[i]=1;
}
prime.pb(2);
for(int i=3;i<=n;i+=2){
    if(!mark[i]){
        prime.pb(i);
        if(i<=limit){
            for(int j=i*i;j<=n;j+=i*2){
                mark[j]=1;
            }
        }
    }
}
}
void segment(int a,int b){
    if(a==1)
        a++;
    int srqtn=sqrt(b);
    int j,p;
    setz(arr);
    for(int i=0;i<prime.size() && prime[i]<=srqtn;i++){
        p=prime[i];
        j=p*p;
        if(j<a)
        j=((a+p-1)/p)*p;
        for(int k=j;k<=b;k+=p){
            arr[k-a]=1;
        }

    }

    for(int i=a;i<=b;i++){
        if(arr[i-a]==0){
            ipf(i);
            nl;
        }
    }
}
int main(){
sieve(100005);
int t,x,y;
isc(t);
while(t--){
    isc2(x,y);
    segment(x,y);
}



}
