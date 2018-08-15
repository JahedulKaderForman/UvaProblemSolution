#include<stdio.h>
int main(){
    int t,a,b,i,j,sum;
    scanf("%d",&t);
    for(j=1;j<=t;j++){
            sum=0;
        scanf("%d%d",&a,&b);
        for(i=a;i<=b;i++){
            if(i%2!=0){
                sum+=i;
            }
        }
        printf("Case %d: %d\n",j,sum);
    }

    return 0;
}
