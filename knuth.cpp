#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int f[100];
char pattern[100],text[100];
void failure(char *pattern){
    int k=0,len=0,i,j;
    f[0]=0;
    for(i=1;pattern[i];i++){
        if(pattern[i]==pattern[k]){
            len++;
            f[i]=len;
            k++;
        }
        else{
            if(k>0){
                k=0;
                len=0;
                f[i]=len;
            }
            else{
                f[i]=len;
            }
        }
    }
}
void kmp(char *text,char *pattern){
    int i=0,j=0,slen,plen,pos;
    slen=strlen(text);
    plen=strlen(pattern);
    while(slen-i>plen){
        if(text[i]==pattern[j]){
            i++;
            j++;
            if(j==plen){
                pos=i-plen;
                cout<<pos<<endl;
                j=f[j-1];
            }
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
}
int main(){
    gets(text);
    gets(pattern);
    failure(pattern);
    kmp(text,pattern);

}
