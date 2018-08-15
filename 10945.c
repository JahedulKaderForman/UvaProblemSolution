#include<stdio.h>
#include<string.h>

int main(){
    char a[100],b[1000],c[1000],m[1000];
    int i,j=0,k,len,temp;
    while(gets(a)){
    if(strcmp(a,"DONE")==0)
            break;
    i=0;j=0;k=0;
    for(i=0;a[i]!='\0';i++){
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
            b[j]=a[i];
            j++;
        }
    }
    b[j]='\0';
    for(i=0;i<=j;i++){
        b[i]=tolower(b[i]);
    }
    len=strlen(b);
    for(i=len-1;i>=0;i--){
            c[k]=b[i];
            k++;
    }
    c[k]='\0';
    if(strcmp(b,c)==0){
        printf("You won't be eaten!\n");
    }
    else{
        printf("Uh oh..\n");
    }
    }
    return 0;
}
