#include<stdio.h>

int main(){
    int a,b,d,s,c,i,j,m,n,o,flag;
    while(scanf("%d%d",&a,&b)){
            flag=0;
        if(a==0 && b==0)
            break;
        for(i=1;i<=a;i++){
            scanf("%d",&c);
        }
        for(j=1;j<=b;j++){
            scanf("%d%d%d",&m,&n,&s);
            if(m<s){
                flag=1;
            }

        }
        if(flag==1){
           printf("N\n");
        }
            else
            {
                printf("S\n");
            }
    }
    return 0;
}
