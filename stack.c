#include<stdio.h>
#define max 100
int a[100];
int top=-1;
push(int x){
    int i;
    if(top==max-1){
        printf("Stack is overflow\n");
        return;
    }
    top++;
    a[top]=x;
    printf("Stack :");
    for(i=0;i<=top;i++){
        printf("%d ",a[i]);
    }
}
pop(int x){
    int i,d;
    if(top==-1){
        printf("Stack is underflow\n");
        return;
    }
    top--;
    printf("Stack :");
    for(i=0;i<=top;i++){
        printf("%d ",a[i]);
    }




}
int main(){
    int choice,n,value;
       printf("Enter the choice\npress 1 for push\npress 2 for pop \npress 3 exit\n\n\n");
    while(1){
        printf("press choice:");
        scanf("%d",&choice);
        if(choice==1){
            printf("Enter the value for push:");
            scanf("%d",&value);
            push(value);
            printf("\n");
        }
        else if(choice==2){
            printf("Enter the value for pop:");
            scanf("%d",&value);
            pop(value);
            printf("\n");

        }
        else if(choice==3){
            return;
        }
    }

    return 0;
}
