#include<stdio.h>

int fun(int n){

    if(n==1)
        return 1;
    else{
        return  fun(n*(n-1));
    }

}
int main(){

    int a,p;
    scanf("%d",&a);
    p=fun(a);
    printf("%d",p);





}
