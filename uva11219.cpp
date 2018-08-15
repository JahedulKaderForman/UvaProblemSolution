#include<bits/stdc++.h>
using namespace std;
bool leepyear(int x){
if(x%400==0 || (x%100!=0 && x%4==0)){
    return true;
}
else
    return false;
}
int main(){
  //  freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
int d1,m1,y1,d2,m2,y2,t,leep,leep2;
cin>>t;
for(int i=1;i<=t;i++){
        leep=0,leep2=0;
    scanf("%d/%d/%d",&d1,&m1,&y1);
     scanf("%d/%d/%d",&d2,&m2,&y2);
    // cout<<d1<<" "<<m1<<" "<<y1<<endl;
      //cout<<d2<<" "<<m2<<" "<<y2<<endl;
      leep=leepyear(y1);
      leep2=leepyear(y2);
//cout<<leep<<" "<<
printf("Case #%d: ",i);
      if(y1>=y2){
        if(y1-y2>130){
            cout<<"Check birth date"<<endl;
        }
        else if(m1==m2 && d1==d2){
            cout<<0<<endl;
        }
        else if(m1==m2 && (leep==1 || leep2==1) && ((d1==28 && d2==29)|| (d1==29 && d2==28))){
            cout<<0<<endl;
        }
        else if(y1==y2){
            if(m1==m2){
                if(d1>d2){
                    cout<<0<<endl;
                }
                else{
                    cout<<"Invalid birth date"<<endl;
                }
            }
            else{
                if(m1>m2){
                    cout<<0<<endl;
                }
                else{
                    cout<<"Invalid birth date"<<endl;
                }
            }
        }
        else{
            cout<<y1-y2<<endl;
        }
      }
      else{
        cout<<"Invalid birth date"<<endl;
      }


}
}
