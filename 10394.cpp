#include<bits/stdc++.h>
using namespace std;
#define max 20000001
int twin[2000000],flag[20000001];
void seive(){
   int store,j, i,o=0;
    flag[0]=1;
    flag[1]=1;
    store=sqrt(20000001);
    for( i=4;i<=max;i+=2){
        flag[i]=1;
    }
    for(j=3;j<=store;j+=2){
        if(flag[i]==0){
            for(i=j+j;i<=max;i+=j){
                flag[i]=1;
            }
        }
    }
    int k=1;
    for(j=0;j<=max;j++){
        if(flag[j]==0 && flag[j+2]==0){
           twin[k]=j;
           k++;
        }
    }
    }


int main()
{
    int n;
    seive();
    while(scanf("%d",&n)==1){
        printf("(%d, %d)\n",twin[n],twin[n]+2);
    }

}
