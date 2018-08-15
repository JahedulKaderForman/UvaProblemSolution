#include<iostream>

using namespace std;
int main(){
    long long int a[100][100],i,j,k,n,test,sali,bali;
    cin>>test;
    for(k=1;k<=test;k++){

            sali=0;bali=0;
            cin>>n;

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                sali+=a[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                bali+=a[j][i];
            }
        }
        if(sali==bali){
        cout<<"Case "<<k<<":"<<"both"<<endl;
        }
        cout<<"ss="<<sali<<"bali="<<bali<<endl;

    }
}
