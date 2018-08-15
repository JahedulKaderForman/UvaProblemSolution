#include<stdio.h>
int fun(int x);

int main(){
    int n,p;
    scanf("%d",&n);
    p=fun(n);
    printf("%d",p);
    return 0;
}
int fun(int x){

    if(x==1)
        return 0;
    else if(x%2!=0){
        return fun(x*3+1);
    }
    else
        return fun(x/2);

}
