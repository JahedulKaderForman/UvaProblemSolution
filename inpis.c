#include<stdio.h>
#include<string.h>
char arr[100];
pushstack(int tm1);
getvalue(char tm2);
int top=-1,i;
int stack[100];

int main()
{
    int i,len;
    printf("Enter the infix : ");
    gets(arr);
    len=strlen(arr);
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]>='0' && arr[i]<='9'){
            pushstack(i);
        }
        else if(arr[i]=='+' || arr[i]=='-' ||arr[i]=='*' || arr[i]=='/' || arr[i]=='^'){
            getvalue(arr[i]);
        }
    }
    printf("\nResult %d ",stack[top]);
    return 0;
}
pushstack(int tm1){
    top++;
    stack[top]=(int)(arr[tm1]-'0');
}
getvalue(char tm2){
    int a,b,ans;
    a=stack[top];
    stack[top]='\0';
    top--;
    b=stack[top];
    stack[top]='\0';
    top--;
switch(tm2){
case '+':
    ans=b+a;
    break;
case '-' :
    ans=b-a;
    break;
case '*':
    ans=b*a;
    break;
case '/' :
    ans=b/a;
    break;
case '^' :
    ans=b^a;
    break;

}
top++;
stack[top]=ans;
}


