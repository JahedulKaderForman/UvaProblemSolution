#include<stdio.h>

int main(){

    int a,r,m,c,d,i,n,t,l,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
            m=0,t=0;
        scanf("%d",&n);
        for(j=1;j<=n;j++){
            scanf("%d",&r);
            if(r<=60){
                c=15;
            }
            else if(r>60){
                if(r%60==0){
                    d=r/60;
                    c=15*d;
                }
                else if(r%60!=0){
                    d=r/60;
                    c=(15*d)+15;
                }
            }
            m=m+c;
            if(r<=30){
                l=10;
            }
            else if(r>30){
                if(r%30==0){
                    d=r/30;
                    l=10*d;
                }
                else if(r%30!=0){
                    d=r/30;
                    l=(10*d)+10;
                }
            }
            t=t+l;
        }
        if(t<m){
            printf("Case %d: Mile %d\n",i,t);
        }
        else if(t>m){
              printf("Case %d: Juice %d\n",i,m);
        }
        else if(t==m){
             printf("Case %d: Mile Juice %d\n",i,t);
        }
    }
    return 0;

}
