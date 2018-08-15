#include<stdio.h>

int main(){
    int n,a,s,d,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        s=0;
        for(j=1;j<=a;j++){
            scanf("%d",&d);
            if(d>s){
                s=d;
            }
        }
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
