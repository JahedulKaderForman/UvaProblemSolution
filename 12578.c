#include<stdio.h>
#include<math.h>
#define PI acos(-1.0)
int main(){
    int t,l,i;
    double a,r,b,w;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&l);
        r=l/5;
        a=PI*r*r;
        w=(l/10)*6;
        b=(l*w)-a;
        printf("%.2lf  %.2lf\n",a,b);
    }
    return 0;
}
