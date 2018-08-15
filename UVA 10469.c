#include<stdio.h>
#include<string.h>

int main(){

    int a,b,c;
    while((scanf("%d%d",&a,&b)!=EOF)){
    c=a^b;
    printf("%d\n",c);
    }
    return 0;
}
