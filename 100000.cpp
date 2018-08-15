#include<stdio.h>

int main(){

    int n,k=1,m,j,e,q=0;
    while(scanf("%d%d",&m,&j)!=EOF){
            if(m<j){
    for(n=m;n<=j;n++){
    k=1;
    e=n;
    while(e!=1){
        if(e%2!=0){
            e=3*e+1;
        }
        else
            e=e/2;
        k++;
    }
    if(k>q){
        q=k;
    }
    }
    printf("%d %d %d\n",m,j,q);
    q=0;
            }
    else{
            for(n=j;n<=m;n++){
    k=1;
    e=n;
    while(e!=1){
        if(e%2!=0){
            e=3*e+1;
        }
        else
            e=e/2;
        k++;
    }
    if(k>q){
        q=k;
    }
    }
    printf("%d %d %d\n",m,j,q);
    q=0;

    }
    }
return 0;
}
