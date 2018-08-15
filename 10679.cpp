#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
char text[1000000],pattern[1000000];
int f[1000000];
void failure(char *pattern){
    int i,k=0,len=0;
    f[0]=0;
    for(i=1;pattern[i];i++){
        if(pattern[i]==pattern[k]){
            len++;
            f[i]=len;
            k++;
        }
        else{
            if(k>0){
                len=0;
                f[i]=len;
                k=0;
            }
            else{
                f[i]=len;
            }
        }
    }
}
void kmp(char *text,char *pattern){
    int i=0,j=0,slen,plen,flag;
    slen=strlen(text);
    plen=strlen(pattern);
    while(text[i]){
            flag=0;
        if(text[i]==pattern[j]){
            if(j==plen-1){
                flag=1;
                break;
            }
             i++;j++;
        }
        else{
            if(j>0){
                j=f[j-1];
                i++;
            }
            else{
                i++;
            }
        }
    }
if(flag==1)
    cout<<"y"<<endl;
else
    cout<<"n"<<endl;
}
int main(){
    int n,m;
    char temp;
    scanf("%d%c",&n,&temp);
    while(n--){
        gets(text);
        scanf("%d%c",&m,&temp);
        while(m--){
            gets(pattern);
            failure(pattern);
            kmp(text,pattern);
        }
    }
}
