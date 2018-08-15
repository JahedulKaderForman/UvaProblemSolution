#include<stdio.h>

int main(){
 int n,a,b,i;
 scanf("%d",&n);
 for(i=1;i<=n;i++){
    scanf("%d%d",&a,&b);
    printf("%d\n",(a/3)*(b/3));
 }
 return 0;

}
