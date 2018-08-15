#include<bits/stdc++.h>
using namespace std;
#define ft    int t; scanf("%d", &t); for(int c=1; c<=t; c++)

#define nl printf("\n")
#define pb(a) push_back(a)
#define sz(a) sizeof(a)
#define setz(a) memset(a, 0, sizeof(a))

#define isc(a) scanf("%d", &a)
#define ipf(a) printf("%d", a)


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
struct abc
{
    int value , mark ; // mark 0 for start point , 1 for end
} Inp [ 200 ] ;
bool cmp ( abc A  , abc B )
{
    if ( A.value == B.value ) return A.mark < B.mark ;  // start mark age thakbe
    return A.value < B.value ;
}

int main()
{
    int n , i  , x , y , idx = 0;
    cin >> n ;
    for ( i = 0 ; i < n ; i++ )
    {
        cin >> x >> y ;
        Inp[idx].value = x ;
        Inp[idx++].mark = 0 ;
        cout<<idx<<endl;
        Inp[idx].value = y ;
        Inp[idx++].mark = 1 ;
    }
    sort(Inp , Inp+idx , cmp );
    for(int i=0;i<idx;i++){
        cout<<Inp[i].value<<" "<<Inp[i].mark<<endl;
    }
    int Ans = -1 ;
    int cur = 0 ; // eita count korbe koyta program ekhon run korche
    for ( i = 0 ; i < idx ; i++ )
    {
        if( Inp[i].mark == 0 ) // mane notun program start hoiche
            cur++;
        else cur-- ; // program off hoiche
        Ans = max(Ans , cur );
    }
   cout<<Ans<<endl;
    return 0 ;

}

