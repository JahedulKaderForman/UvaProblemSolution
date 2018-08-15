#include<stdio.h>
#include<iostream>
using namespace std;
int k=-1;
char stackk[1000];
void push(char value){
    k++;
    stackk[k]=value;
}
void pop(){
    k--;
}
int main(){
    long long int i,flag,counter1=0,counter2=0,n;
    char ch[1000],temp;
    scanf("%lld%c",&n,&temp);
    while(n--){
      counter1=0;counter2=0,k=-1;
    gets(ch);
    for(i=0;ch[i];i++){
            flag=1;
        if(ch[i]=='(' || ch[i]=='['){
            push(ch[i]);
            counter1++;
           }
        else if(ch[i]==')' || ch[i]==']'){
            if(k==-1){
                flag=0;
                break;
            }
            else if(ch[i]==')' && stackk[k]=='('){
                pop();
                counter2++;
            }
            else if(ch[i]==']' && stackk[k]=='['){
                pop();
                counter2++;
            }
            else{
                flag=0;
                break;
            }
        }
    }
    if(counter1==counter2 && flag!=0){
        cout<<"Yes"<<endl;
    }
    else
       cout<<"No"<<endl;
    }
}
