#include<bits/stdc++.h>
using namespace std;
#define ft    int t; scanf("%d", &t); for(int c=1; c<=t; c++)

#define nl printf("\n")
#define pb(a) push_back(a)
#define sz(a) sizeof(a)
#define setz(a) memset(a, 0, sizeof(a))

#define isc(a) scanf("%d", &a)
#define lsc(a) scanf("%ld", &a)
#define llsc(a) scanf("%lld", &a)

#define ipf(a) printf("%d", a)
#define lpf(a) printf("%ld", a)
#define llpf(a) printf("%lld", a)

#define tc1(x)        printf("Case %d: ",x)
#define tc2(x)        printf("Case #%d: ",x)
#define tc3(x)        printf("Case %d:\n",x)
#define tc4(x)        printf("Case #%d:\n",x)


#define dsc(a) scanf("%lf", &a)
#define dpf2(a) printf("%.2f", a)
#define dpf3(a) printf("%.3f", a)
#define spf(a) printf("%s", a)

#define fl(a) floor(a)



#define pii pair<int,int >
#define mp(a,b) make_pair(a,b)

typedef long long LL;
typedef unsigned long long uLL;

template<class T>
T cmpfunc(const void * a, const void * b)
{
    return ( *(T*)a - *(T*)b );
}
//int item = *((int*) bsearch (&key, name_of_array, noOfitems, sizeof (int), cmpfunc));

template <class T>
T gcd(T x,T y)
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
    int n;
    cin>>n;
    string s;
    cin.ignore();
    uLL res,st;
    for(int i=1;i<=n;i++){
        cin>>s;
        res=1;
        map<char,int>m;
        map<char,int>:: iterator it;;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(int j=1;j<=s.size();j++){
            res*=j;
        }
        for(it=m.begin();it!=m.end();it++){
                 st=1;
            if(it->second>1){
                for(int j=1;j<= it->second;j++){
                    st*=j;
                }
                res/=st;
            }
        }
        printf("Data set %d: ",i);
        cout<<res<<endl;
    }
}
