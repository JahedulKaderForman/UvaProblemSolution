#include<stdio.h>

int main(){

    int a,n,b,d,i,j,c,k,l;
    scanf("%d",&d);
    for(i=1;i<=d;i++){
        k=0,j=0;
        scanf("%d",&n);
        scanf("%d",&a);
        c=a;
        for(l=1;l<n;l++){
            scanf("%d",&b);
            if(c<b){
                j++;
            }
            else if(c>b){
                k++;
            }
            c=b;
        }
        printf("Case %d: %d %d\n",i,j,k);
    }
    return 0;

}
