#include<stdio.h>
#include<iostream>

using namespace std;
int main(){
    freopen("Input.in","r",stdin);
    freopen("ounput.out","w",stdout);
    int n,k,flag;
    char ch[10000],a[10000],temp;
    scanf("%d%c",&n,&temp);
    while(n--){
            k=0;
            gets(a);
        for(int i=0;a[i];i++){
            if(a[i]!=' '){
                ch[k]=a[i];
                k++;
            }
        }
        ch[k]='\0';
        for(int i=1;i<k-1;i+=2){
                flag=1;
            if(ch[i]==ch[i+1]){
                flag=0;
                break;
            }
        }
        if((ch[0]!=ch[k-1]) && flag==1){
            cout<<"LOOP"<<endl;
        }
        else
            cout<<"NO LOOP"<<endl;

    }
  return 0;
}
