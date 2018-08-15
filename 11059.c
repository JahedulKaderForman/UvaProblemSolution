#include<stdio.h>

int main(){
    int a,n,pro=1,q=0,i,count=1;
    while(scanf("%d",&n)!=EOF){
            pro=1;
        for(i=1;i<=n;i++){
            scanf("%d",&a);
            if(a>0){
                q=1;
                pro=pro*a;
            }
        }
        if(q==1){
            printf("Case #%d: The maximum product is %d.\n",count++,pro);
        }
        else{
         printf("Case #%d: The maximum product is %d.\n",count++,0);
        }
            printf("\n");
    }
    return 0;
}
