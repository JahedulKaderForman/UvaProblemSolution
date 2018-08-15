#include<stdio.h>
#include<string.h>

int main(){
    freopen("tm.in","r",stdin);
    freopen("tm.out","w",stdout);
    int i,n,j,k,l,m;
    char c,a[16][50]={"Happy","birthday","to",
    "you","Happy","birthday","to","you",
    "Happy","birthday","to","Rujia",
    "Happy","birthday","to","you"};
    char b[102][200];
    scanf("%d",&n);
    c=getchar();
    for(j=0;j<n;j++){
        gets(b[j]);
    }
    k=0;
    l=0;
    m=0;
    if(n>15){
        while(m<n){
        for(i=0;i<=15;i++){
        printf("%s: %s\n",b[l],a[i]);
        l++;
        m++;
        if(l>=n){
            l=0;
        }
        }
         if(l>15){
            i=0;
        }

    }
    }
    else{
    for(i=0;i<=15;i++){
        printf("%s: %s\n",b[k],a[i]);
        k++;
    if(k>=n){
        k=0;
    }
    }
    }
    return 0;
}
