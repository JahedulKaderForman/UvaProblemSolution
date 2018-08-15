#include<stdio.h>
#include<string.h>
int main(){
    char s[20];
    char w[]="#",a[]="HELLO",b[]="HOLA",g[]="HALLO",d[]="BONJOUR",e[]="CIAO",f[]="ZDRAVSTVUJTE";
    int i,c;
    for(i=1;i<=2000;i++){
        gets(s);
        if(c=strcmp(s,w)==0)
                    break;
        if(c=strcmp(s,a)==0){

            printf("Case %d: ENGLISH\n",i);
        }
        else if(c=strcmp(s,b)==0){

            printf("Case %d: SPANISH\n",i);
        }
         else if(c=strcmp(s,g)==0){

            printf("Case %d: GERMAN\n",i);
        }
         else if(c=strcmp(s,d)==0){

            printf("Case %d: FRENCH\n",i);
        }
         else if(c=strcmp(s,e)==0){

            printf("Case %d: ITALIAN\n",i);
        }
         else if(c=strcmp(s,f)==0){

            printf("Case %d: RUSSIAN\n",i);
        }
        else
            printf("Case %d: UNKNOWN\n",i);
        }
    }
