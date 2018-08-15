#include<stdio.h>

struct node{
    int data;
    struct node *next;

}*head;
void creatlist(int n);
void traverselist();

int main(){
    int a;
    printf("enter the number of node:\n");
    scanf("%d",&a);
    creatlist(a);
    printf("\nData in the list \n");
    traverselist();


    return 0;

}
void creatlist(int n){
        struct node *newnode,*temp;
        int data,i;
        head=(struct node*)malloc(sizeof(struct node));
        if(head==NULL){
            printf("ERROR");
        }
        else{
            printf("Enter the value of 1 node: \n");
            scanf("%d",&data);
            head->data=data;
            head->next=NULL;

            temp=head;
        }
        for(i=2;i<=n;i++){
            newnode=(struct node*)malloc(sizeof(struct node));
            if(newnode==NULL){
                printf("ERROR\n");
            }
            else{
                printf("Enter the value of %d",i);
                scanf("%d",&data);
                newnode->data=data;
                newnode->next=NULL;
                temp->next=newnode;
                temp=temp->next;
            }
        }

}
void traverselist(){
        struct node *temp;
        if(head==NULL){
            printf("list is empty\n");
        }
        else{
            temp=head;
            while(temp!=NULL){
                printf("Data=%d\n",temp->data);
                temp=temp->next;
            }
        }

}

