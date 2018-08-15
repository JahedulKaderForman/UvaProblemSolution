#include<stdio.h>
#include<string.h>

int main(){
    char s,g,a[100],b[100];
    int i,n,j,len1,flag=0;
    scanf("%d",&n);
    scanf("%c",&s);
    for(i=1;i<=n;i++){
            flag=0;
            j=0;
    scanf("%s",&a);
    scanf("%c",&g);
    scanf("%s",&b);
    len1=strlen(a);
    if(len1==strlen(b)){
        if(strcmp(a,b)==0){
            flag=1;
        }
        else {
        for(j=0;j<len1;j++){
        if(a[j]=='a' || a[j]=='i' || a[j]== 'o' || a[j]== 'u' || a[j]=='e'){
            if(b[j]=='a' || b[j]=='i' || b[j]== 'o' || b[j]== 'u' || b[j]=='e'){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        else if(a[j]!=b[j]){
                flag=0;
            break;
        }
        }
        }
    }
    if(flag==1){
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    }

return 0;
}
