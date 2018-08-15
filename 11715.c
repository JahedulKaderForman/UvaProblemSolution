#include<stdio.h>
#include<math.h>

int main(){
    double u,v,t,s,a;
    int i=0,chose;
    while(scanf("%d",&chose)){
         i++;
    if(chose==0)
           break;

    else if(chose==1){
        scanf("%lf%lf%lf",&u,&v,&t);
        a=(v-u)/t;
        s=((u*t)+(0.5*a*pow(t,2)));
        printf("Case %d: %.3lf %.3lf\n",i,s,a);
    }
    else if(chose==2){
        scanf("%lf%lf%lf",&u,&v,&a);
         t=(v-u)/a;
         s=((u*t)+(0.5*a*pow(t,2)));
         printf("Case %d: %.3lf %.3lf\n",i,s,t);
    }
    else if(chose==3){
        scanf("%lf%lf%lf",&u,&a,&s);
        v=sqrt(pow(u,2)+2*a*s);
        t=(v-u)/a;
        printf("Case %d: %.3lf %.3lf\n",i,v,t);
    }
    else if(chose==4){
         scanf("%lf%lf%lf",&v,&a,&s);
         u=sqrt(pow(v,2)-2*a*s);
         t=(v-u)/a;
         printf("Case %d: %.3lf %.3lf\n",i,u,t);
    }
    }

    return 0;
}
