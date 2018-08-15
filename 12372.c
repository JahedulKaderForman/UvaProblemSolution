#include<stdio.h>
int main(){
    int a,b,c,l,i;
    scanf("%d",&l);
    for(i=1;i<=l;i++){
        scanf("%d%d%d",&a,&b,&c);
        if(a==20 && b==20 && c==20){
            printf("Case %d: good\n",i);
        }
        else
            printf("Case %d: bad\n",i);
    }
    return 0;
}
