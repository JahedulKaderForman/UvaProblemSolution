#include<stdio.h>

int main(){
    unsigned long int a,b[10],c[10];
    scanf("%ld",&a);
    if(a>10000000){
       c[1]=a/10000000;
       c[2]=a%10000000;
       printf("%ld",c[1]);
       /*if(c[2]>10000000){
       b[1]=a/10000000;
       b[2]=a%10000000;
       b[3]=b[2]/100000;
       b[4]=b[2]%100000;
       b[5]=b[4]/1000;
       b[6]=b[4]%1000;
       b[7]=b[6]/100;
       b[7]=b[6]%100;
       }
       else if(c[2]>100000){
       b[3]=b[2]/100000;
       b[4]=b[2]%100000;
       b[5]=b[4]/1000;
       b[6]=b[4]%1000;
       b[7]=b[6]/100;
       b[7]=b[6]%100;
    }
    else if(c[2]>1000){
       b[5]=b[4]/1000;
       b[6]=b[4]%1000;
       b[7]=b[6]/100;
       b[7]=b[6]%100;
    }
    else if(c[2]>100){

    }
       }
       printf("%ld kuti %ld lukh %ld hajar %ld shata\n",b[1],b[3],b[5],b[7]);
    */

    }
}
