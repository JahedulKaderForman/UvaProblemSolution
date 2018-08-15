#include<stdio.h>

int main(){
        int i,j,k,a,b,t,n;
       scanf("%d",&n);
        printf("Lumberjacks:\n");
        for(t=1;t<=n;t++){
                k=0;j=0;
            scanf("%d",&a);
            for(i=2;i<=10;i++){
                scanf("%d",&b);
                if(b>=a){
                    j++;
                }
                else if(a>=b){
                    k++;
                }
            }
            if(j==9 || k==9){
                printf("Ordered\n");
            }
            else
                printf("Unordered\n");
        }
    return 0;
}
