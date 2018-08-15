#include<stdio.h>
#include<iostream>
using namespace std;
const int size=5;
int que[size],fornt=0,rear=0;
void enque(int value){
    if(rear==size){
    cout<<"que is full"<<endl;
    }
        else{
        cout<<value<<"add"<<endl;
        que[rear]=value;
        }

    rear++;
}
void dequee(){
    if(fornt==rear){
        cout<<"que is emti"<<endl;
    }
    else{
        fornt++;
    }
}
void display(){
    if(fornt==rear){
        cout<<"que is empty"<<endl;
    }
    else{
        for(int i=fornt;i<rear;i++){
            cout<<que[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    enque(4);
    display();
    enque(5);
    display();
    enque(6);
    display();
    dequee();
     display();
     dequee();
     display();
     dequee();
     display();


}
