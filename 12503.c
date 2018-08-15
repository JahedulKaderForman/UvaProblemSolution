#include<stdio.h>
#include<string.h>

int main(){
    char a[120],b[]="LEFT",c[]="RIGHT",d[]="SAME AS",z,y;
    int n,sum=0,m,i,k[120];

    scanf("%d",&n);
    y=getchar();

    for(i=0;i<n;i++){
            gets(a);
        if(strcmp(a,b)==0){
            k[i]=-1;
        }
        else if(strcmp(a,c)==0){
            a[i]=1;
        }
        else if(strcmp(a,d)==0){
                k[i]=3;
        }
        printf("%d\n",a[i]);
    }
    return 0;
}
