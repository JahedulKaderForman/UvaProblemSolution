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
#define casepf(a) printf("Case %d: ", a)
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
vector<int>adj[100005];
vector< pair<int,int> >link;
int visited[100005],start_time[100005],low_time[100005],parent[100005],tim=0,child_count=0,v,root,total;
void Articulationpoin(int u)
{
    visited[u]=1;
    start_time[u]=tim;
    low_time[u]=tim;
    tim++;
    bool isArti =false;
    for(int i=0; i<adj[u].size(); i++)
    {
        v=adj[u][i];   /// adj of each node u

        if(v==parent[u])
            continue;
        if(!visited[v])     /// if unvisited tree edge
        {
            if(u==root)child_count++;
            parent[v]=u;
            Articulationpoin(v);

            int k=adj[u][i];      /// it's important adj[u][i] save again new variable
            if(start_time[u]<low_time[k])
            {
                if(u<k)
                {
                    link.pb(mp(u,k));
                }
                else
                {
                    link.pb(mp(k,u));
                }
            }
            else
                low_time[u]=min(low_time[u],low_time[k]); /// low_time[u]=min(low_time[u],low_time[v]

        }
        else
        {
            low_time[u]=min(low_time[u],start_time[v]);  /// else u is visited that means back edge then low_time[u]=min(low_time[u],start_time[v])
        }
    }
//    if((parent[u]==-1 && child_count>=2)||(parent[u]!=-1 && isArti)) /// for count Articulation point
//    {
//        total++;
//    }
}

int main()
{
    int node,edge,x,y,t,q=1;
    while(cin>>node){
        setz(visited);
        setz(parent);
        setz(start_time);
        setz(low_time);
        total=0;
        tim=0;
        for(int i=1; i<=node; i++)
        {
            scanf("%d (%d)",&x,&edge);
            for(int j=0; j<edge; j++)
            {
                isc(y);
                adj[x].pb(y);
            }
        }
        for(int i=0; i<node; i++)
        {
            if(!visited[i])
            {
                child_count=0;
                parent[i]=-1; /// for root node assing null
                root=i;         /// save root node
                Articulationpoin(i); /// call dfs
            }
        }
        sort(link.begin(),link.end());
        printf("%d critical links\n",link.size());
        for(int i=0; i<link.size(); i++)
        {
            printf("%d - %d",link[i].first,link[i].second);
            nl;
        }
        for(int i=0; i<node; i++)
        {
            adj[i].clear();
        }
        link.clear();
        nl;
        q++;
    }
}


