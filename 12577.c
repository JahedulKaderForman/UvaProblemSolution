#include<stdio.h>
int main(){
    char s[6],a[]="Hajj",b[]="Umrah",d[]="*";
    int c,i=0;
    while(gets(s)){
            i++;
            if((c=strcmp(s,d))==0)
                break;
            else if((c=strcmp(s,a))==0){
                printf("Case %d: Hajj-e-Akbar\n",i);
            }
            else if((c=strcmp(s,b))==0){
                printf("Case %d: Hajj-e-Asghar\n",i);
            }

    }
    return 0;

}
