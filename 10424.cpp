#include<stdio.h>
#include<iostream>

using namespace std;
int main(){
    char lower[26],temp1='a',upper[26],temp2='A',data1[1000],data2[1000];
    int value[26],temp3=1,i,j,result1,result2,num,sum,flag2,flag1;
    double ans;
    for(int i=0;i<26;i++){
        lower[i]=temp1++;
        upper[i]=temp2++;
        value[i]=temp3++;
    }
    while(gets(data1)){
            flag1=0;
            flag2=0;
            gets(data2);
            result1=0;result2=0;sum=0;
        for(i=0;data1[i]!='\0';i++){
                if((data1[i]>='a' && data1[i]<='z') || (data1[i]>='A' && data1[i]<='Z')){
                        flag1=1;
            for(j=0;j<26;j++){
                if(lower[j]==data1[i] || upper[j]==data1[i]){
                    result1+=value[j];
                    break;
                }
            }
                }
        }
        if(flag1==1){
        while(result1>9){
                sum=0;
                num=result1;
                while(num!=0){
                    sum+=num%10;
                    num=num/10;
                }
                result1=sum;

        }
        }
        for(i=0;data2[i]!='\0';i++){
                if((data2[i]>='a' && data2[i]<='z') || (data2[i]>='A' && data2[i]<='Z')){
                        flag2=1;
            for(j=0;j<26;j++){
                if(lower[j]==data2[i] || upper[j]==data2[i]){
                    result2+=value[j];
                    break;
                }
            }
        }
        }
        if(flag2==1){
         while(result2>9){
                sum=0;
                num=result2;
                while(num!=0){
                    sum+=num%10;
                    num=num/10;
                }
                result2=sum;

        }
        }
        if( (result1>=result2) && (flag1==1 || flag2==1)){
            ans=((result2)/(result1*1.0))*100;
            printf("%0.2lf %%",ans);
        }
        else if((result1<result2) && (flag1==1 || flag2==1)){
             ans=((result1)/(result2*1.0))*100;
             printf("%0.2lf %%",ans);
            }
        printf("\n");
        }
    }

