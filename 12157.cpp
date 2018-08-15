#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,m,i,j,a[10000],mile,juice;
    double f;
    cin>>n;
    for(j=0;j<n;j++){
        mile=0;juice=0;
        cin>>m;
        for(i=0;i<m;i++){
            cin>>a[i];
            f=(61/29);
            printf("%lf",ceil(f));
            mile+=(ceil(a[i]/29))*10;
            juice+=ceil(a[i]/59)*15;
              cout<<mile<<" "<<juice<<endl;
        }
        if(mile>juice)
            printf("Case %d: Mile %d\n",j,juice);
        else if(mile<juice)
            printf("Case %d: Juice %d\n",j,mile);
        else
           printf("Case %d: Mile Juice %d\n",j,mile);
    }




}
