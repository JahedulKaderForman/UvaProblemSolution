#include<stdio.h>
#include<string.h>

int  main(){
    char s, a[1000];
    int n,len,i;
    scanf("%d",&n);
    scanf("%c",&s);
    for(i=1;i<=n;i++){
        scanf("%s",a);
        len=strlen(a);
        if(len==3){
                if(strcmp(a,"one")==0){
                    printf("1\n");
                }
                else if(strcmp(a,"two")==0){
                    printf("2\n");
                }
                else if((a[0]>='a' && a[0]<='z') && a[1]=='n' && a[2]=='e'){
                    printf("1\n");
                }
                else if(a[0]=='o' && (a[1]>='a' && a[1]<='z') && a[2]=='e'){
                    printf("1\n");
                }
                else if(a[0]=='o' && a[1]=='n' && (a[2]>='a' && a[2]<='z')){
                    printf("1\n");
                }
                else  if((a[0]>='a' && a[0]<='z') && a[1]=='w' && a[2]=='o'){
                    printf("2\n");
                }

                 else if(a[0]=='t' && (a[1]>='a' && a[1]<='z') && a[2]=='o'){
                    printf("2\n");
                 }
                 else if(a[0]=='t' && a[1]=='w' && (a[2]>='a' && a[2]<='z')){
                    printf("2\n");
                }
            }
        else if(len==5){
                if(strcmp(a,"three")==0){
                    printf("3\n");
                }
                else if((a[0]>='a' && a[0]<='z') && a[1]=='h' && a[2]=='r' && a [3]=='e' && a[4]=='e'){
                    printf("3\n");
                }
                else if(a[0]=='t' && (a[1]>='a' && a[1]<='z') && a[2]=='r' && a [3]=='e' && a[4]=='e'){
                    printf("3\n");
                }
                 else if(a[0]=='t' && a[1]=='h' && (a[1]>='a' && a[1]<='z') && a [3]=='e' && a[4]=='e'){
                    printf("3\n");
                }
                 else if(a[0]=='t' && a[1]=='h' && a[2]=='r' && (a[3]>='a' && a[3]<='z') && a[4]=='e'){
                    printf("3\n");
                }
                 else if(a[0]=='t' && a[1]=='h' && a[2]=='r' && a[3]=='e' && (a[4]>='a' && a[4]<='z')){
                    printf("3\n");
                }


            }
        }
        return 0;
    }
