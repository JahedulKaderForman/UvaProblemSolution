#include<stdio.h>
int main(){
int a,b,c,d,e,f,g,i,n;
double k,r;
scanf("%d",&n);

for(i=1;i<=n;i++){
        scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
  if(e<=f && e<=g){
    k=a+b+c+d+((f+g)/(2*1.0));
    if(k>=90.0){
        printf("Case %d: A\n",i);
    }
    else if(k>=80.0 && k<90.0){
        printf("Case %d: B\n",i);
    }
    else if(k>=70.0 && k<80.0){
        printf("Case %d: C\n",i);
    }
    else if(k>=60.0 && k<70.0){
        printf("Case %d: D\n",i);
    }
    else
    {
    printf("Case %d: F\n",i);

    }
}
else if(f<=e && f<=g){
         k=a+b+c+d+((e+g)/(2*1.0));
         if(k>=90.0){
        printf("Case %d: A\n",i);
    }
    else if(k>=80.0 && k<90.0){
        printf("Case %d: B\n",i);
    }
    else if(k>=70.0 && k<80.0){
        printf("Case %d: C\n",i);
    }
    else if(k>=60.0 && k<70.0){
        printf("Case %d: D\n",i);
    }
    else
    {
    printf("Case %d: F\n",i);

    }
}

  else if(g<=e && g<=f){
     k=a+b+c+d+((e+f)/(2*1.0));
     if(k>=90.0){
        printf("Case %d: A\n",i);
    }
    else if(k>=80.0 && k<90.0){
        printf("Case %d: B\n",i);
    }
    else if(k>=70.0 && k<80.0){
        printf("Case %d: C\n",i);
    }
    else if(k>=60.0 && k<70.0){
        printf("Case %d: D\n",i);
    }
    else
    {
    printf("Case %d: F\n",i);

    }

}

}
return 0;
}
