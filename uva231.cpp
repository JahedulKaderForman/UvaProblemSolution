#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,m,k=0;
while(scanf("%d",&n)){
    k++;
    if(n==-1)
        break;
        int i=0;
        int a[100005];
        a[i]=n;
    while(scanf("%d",&m)){
        if(m==-1)
             break;
       i++;
       a[i]=m;
    }
    set<int>lic;
    set<int> :: iterator it;
    for(int j=0;j<=i;j++){
        lic.insert(a[j]);
        it=lic.find(a[j]);
        it++;
        if(it!=lic.end()){
            lic.erase(it);
        }
    }
    if(k!=1)
        printf("\n");
    printf("Test #%d:\n",k);
    printf("  maximum possible interceptions: %d\n",lic.size());
    for(it=lic.begin();it!=lic.end();it++){
        cout<<*it<<endl;
    }
}


}
