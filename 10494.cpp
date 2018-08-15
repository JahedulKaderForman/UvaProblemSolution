#include<bits/stdc++.h>
using namespace std;
int main()
{
  // freopen("Input.in","r",stdin);
 // freopen("output.out","w",stdout);

    char arr[1000],division,secondint[1000],firstint[1000];
    int getarr[1000];
    long long int store;
    while(gets(arr))
    {
        int j=0,k=0,flag=0,flag2=0,m=0,temp=0;
        for(int i=0; arr[i]; i++)
        {
            if(flag==0 && arr[i]!=' ')
            {
                if(arr[i]=='/' || arr[i]=='%')
                {
                    division=arr[i];
                    flag=1;
                }
                else
                {
                    firstint[j++]=arr[i];
                }
            }
            else if(arr[i]!=' ')
            {
                secondint[k++]=arr[i];
            }
        }
        firstint[j]='\0';
        secondint[k]='\0';
        store=atoi(secondint);
        for(int i=0; firstint[i]; i++)
        {
               temp=temp*10+firstint[i]-'0';
               if(temp>=store){
                getarr[m++]=temp/store;
                temp=temp%store;
               }
               else{
                getarr[m++]='0';
               }
                cout<<"f"<<getarr[m]<<" ";
        }
        if(division=='/')
        {
                for(int i=0; i<m; i++)
                {
                    if(getarr[i]!='0'){
                        flag2=1;
                    }
                    if(flag2==0)
                        continue;
                    //cout<<getarr[i];
                }
                if(flag2==0){
                    cout<<0;
                }
                cout<<endl;
            }
        else
        {
            cout<<temp<<endl;
        }
    }
}
