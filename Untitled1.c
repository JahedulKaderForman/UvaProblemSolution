#include<stdio.h>
#include<string.h>
#include<math.h>
char post[1000];
int stack[100];
pushstack(int temp);
caluclat(char tem2);
int top=-1;


int main(){
    int i;
    gets(post);
    for(i=0;i<strlen(post);i++){
        if(post[i]>='0' && post[i]<='9'){
            pushstack(i);
        }
        else{
            caluclat(i);
        }
    }

    printf("Result : %d %d",top,stack[top]);

}
pushstack(int temp){
    top++;
    stack[top]= (int)(post[temp]-48);
     printf("stack = %d",stack[top]);

}
caluclat(char tem2){
int a,b,result,ans;
a=stack[top];
stack[top]='\0';
top--;
b=stack[top];
stack[top]='\0';
top--;
switch(tem2){
  case '+':
  ans=b+a;
  break;
  case '-':
  ans=b-a;
  break;
  case '*':
  ans=b*a;
  break;
  case '/':
  ans=b/a;
  break;
  case '^':
  ans=b^a;
  break;
  default:
  ans=0;
 }
top++;
stack[top]=ans;



}

