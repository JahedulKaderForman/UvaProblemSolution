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
map<string,int>m;
map<string,int>::iterator it;
vector<int>adj[200];
vector<string>Ans;
int visited[200],start_time[200],low_time[200],parent[200],root,total,child_count=0,tim,v;
void Articulationpoint(int u)
{
    visited[u]=1;
    start_time[u]=low_time[u]=tim;
    tim++;
    bool isArti=false;
    for(int i=0; i<adj[u].size(); i++)
    {
        v=adj[u][i];
        if(v==parent[u])
            continue;
        if(!visited[v])
        {
            parent[v]=u;
            if(root==u)
                child_count++;
            Articulationpoint(v);
            int k=adj[u][i];
            if(start_time[u]<=low_time[k])
            {
                isArti=true;
            }
            else
            {
                low_time[u]=min(low_time[u],low_time[k]);
            }
        }
        else
        {
            low_time[u]=min(low_time[u],start_time[v]);
        }
    }
if((parent[u]==-1 && child_count>=2) || (parent[u]!=-1 && isArti ))
{
    for(it=m.begin();it!=m.end();it++){
        if(it->second==u){
            Ans.pb(it->first);
        }
    }
}


}
int main()
{
    int node,edge,q=1;
    while(cin>>node)
    {
        if(node==0)
            break;
        cin.ignore();
        setz(visited);
        setz(parent);
        setz(start_time);
        setz(low_time);
        total=0;
        tim=0;
        string s,a,b;
        for(int i=1; i<=node; i++)
        {
            cin>>s;
            m[s]=i;
        }
        cin>>edge;
        cin.ignore();
        while(edge--)
        {
            cin>>a;
            cin>>b;
            adj[m[a]].pb(m[b]);
            adj[m[b]].pb(m[a]);
        }
        for(int i=1; i<=node; i++)
        {
            if(!visited[i])
            {
                  child_count=0;
                parent[i]=-1;
                root=i;
                Articulationpoint(i);
            }
        }
        sort(Ans.begin(),Ans.end());
        if(q!=1)
            nl;
        cout<<"City map #"<<q<<": "<<Ans.size()<<" camera(s) found"<<endl;
        for(int i=0;i<Ans.size();i++)
            cout<<Ans[i]<<endl;
        for(int i=1; i<=node; i++)
        {
            for(int j=0; j<adj[i].size(); j++)
            {
                adj[i].clear();
            }
        }
        q++;
        m.clear();
        Ans.clear();
    }

}
