#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
    char a[1000];
    int i,run=0,wicket=0,over=0,maiden=0,hadtricket=0,total_run=0;
    while(gets(a)){
            run=0;wicket=0;over=0;maiden=0;hadtricket=0;total_run=0;
    for(i=0;a[i];i++){
        if(a[i]=='1' || a[i]=='2' ||a[i]=='3' ||a[i]=='4' ||a[i]=='5' ||a[i]=='6' || a[i]=='N' || a[i]=='w'){
                run=0;
            if(a[i]=='1' || a[i]=='2' ||a[i]=='3' ||a[i]=='4' ||a[i]=='5' ||a[i]=='6'){
                run+=a[i]-'0';
                total_run+=run;
            }
            else{
                run++;
                total_run+=run;
            }
        }
        if(a[i]!='N' && a[i]!='w'){
            over++;
            if(over==6){
                over=0;
                if(run==0){
                    maiden++;
                }
                if(wicket==3){
                    hadtricket++;
                    wicket=0;
                }
                run=0;
            }
        }
        if(a[i]=='W'){
            if(wicket==0){
                wicket++;
            }
            else{
                if(a[i-1]=='W' || a[i-1]=='N'||a[i-1]=='W'){
                    wicket++;
                }
            }
        }
    }
    cout<<"Had ="<<hadtricket<<"Median over= "<<maiden<<"total ="<<total_run<<endl;

    }

}



