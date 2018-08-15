#include<stdio.h>
#include<string.h>
int main(){
    char a[10000],c[10000];
    int flag,i,k=0;
    while(gets(a)){
          k=0;
    for(i=0;a[i];i++){
        if(a[i]!=' '){
            flag=1;
            c[k]=a[i];
            k++;
        }
        if(flag==1 && a[i]==' '){
            c[k]='\0';
            printf("%s",strrev(c));
            flag=0;
            k=0;
        }
        if(flag==0){
            printf("%c",a[i]);
        }

    }
    if(flag==1){
    c[k]='\0';
    printf("%s",strrev(c));
    }
    printf("\n");
}
return 0;
}


