#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int a,b,res,mint,hour,n;
    cin>>n;
    while(n--){
    scanf("%d:%d",&a,&b);
    if(a==12){
        res=(a*60)-b;
        hour=res/60;
        mint=res%60;
        printf("%02d:%02d\n",hour,mint);
    }
    else if(a==11 && b!=0){
        hour=a+1;
        mint=60-b;
        printf("%02d:%02d\n",hour,mint);
    }
    else{
        res=((12-a)*60)-b;
        hour=res/60;
        mint=res%60;
        printf("%02d:%02d\n",hour,mint);
    }
    }


}
