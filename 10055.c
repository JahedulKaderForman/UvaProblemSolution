#include<stdio.h>
int main(){
    unsigned long int a,b,c;
    while(scanf("%ld%ld",&a,&b)!=EOF){
        if(a>b){
            printf("%ld\n",a-b);
        }
        else{
            printf("%ld\n",b-a);
        }

    }
    return 0;

}
