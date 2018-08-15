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
inline T gcd(T x,T y){
    T mod;
    while(x%y){
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
int coin[100],res,n;
LL dp[25][25000];
void cube(){
for(int i=1;i<=23;i++){
    res=(i*i*i);
    coin[i]=res;
}
}
LL make(LL j,LL amount){
for(int i=1;i<=23;i++){
    if(coin[i]>amount){
        n=i;
        break;
    }
}
if(j>=n){
    if(amount==0)
        return 1;
    else
        return 0;
}
if(dp[j][amount]!=-1)
    return dp[j][amount];
LL ret1=0,ret2=0;
if(amount-coin[j]>=0){
    ret1=make(j,amount-coin[j]);
}
ret2=make(j+1,amount);
return dp[j][amount]=ret1+ret2;
}
int main(){
LL v;
cube();
memset(dp,-1,sizeof(dp));
while(cin>>v){
    cout<<make(1,v)<<endl;
}


}
