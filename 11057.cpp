#include<bits/stdc++.h>
using namespace std;
int a[100000];
int bi_search(int m,int high){
int low=0,key=m,mid,index=-1;
while(low<=high){
    mid=(low+high)/2;
    if(a[mid]==key){
      index=1;
      break;
    }
      else if(a[mid]>key){
        high=mid-1;
      }
      else if(a[mid]<key){
        low=mid+1;
      }
}
return index;
}
int main(){
int n,store,cmp,max,key,col,row,tm;
while(cin>>n){
        max=10000000;
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
sort(a,a+n);
scanf("%d",&key);
for(int i=0;i<n;i++){
    if(a[i]<=key){
        tm=key-a[i];
        store=bi_search(tm,n);
        cmp=abs(a[i]-tm);
        if(store==1 && cmp<max){
            row=a[i];
            col=tm;
            max=cmp;
        }

    }
}
if(row<col)
printf("Peter should buy books whose prices are %d and %d.\n",row,col);
else
   printf("Peter should buy books whose prices are %d and %d.\n",col,row);
   cout<<endl;
}

}
