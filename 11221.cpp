#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;
int main(){
    char store[11000],data[11000],temp,arr[10000][100],last1[1000],last2[10000],last3[10000],last4[10000];
    int c[112],i,k=0,len,j,n,flag,h;
    for(i=1;i<110;i++){
        c[k]=i*i;
        k++;
    }
    scanf("%d",&n);
    scanf("%c",&temp);
    for(i=1;i<=n;i++){
        flag=0;
        gets(store);
          k=0;
        for(j=0;store[j]!='\0';j++){
            if(store[j]>='a' && store[j]<='z'){
                data[k]=store[j];
                k++;
            }
        }
        data[k]='\0';
        len=strlen(data);
        for(j=0;j<110;j++){
            if(c[j]==len){
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("Case #%d:\nNo magic :(\n",i);
        else{
                len=sqrt(len);
                h=0;
            for(j=0;j<len;j++){
                for(k=0;k<len;k++){
                    arr[j][k]=data[h];
                    h++;
                }
            }
                for(k=0;k<len;k++){
                    last1[k]=arr[0][k];
                    last2[k]=arr[k][0];
                }
                last1[k]='\0';
                 last2[k]='\0';
                h=0;
                for(k=len-1;k>=0;k--){
                    last3[h]=arr[len-1][k];
                    last4[h]=arr[k][len-1];
                    h++;
                }
                last3[h]='\0';
                 last4[h]='\0';
                 if(strcmp(last1,last2)==0 && strcmp(last1,last3)==0 && strcmp(last1,last4)==0){
                    printf("Case #%d:\n%d\n",i,len);
                 }
                 else{
                    printf("Case #%d:\nNo magic :(\n",i);
                 }
            }
        }

    }

