#include<stdio.h>
#include<iostream>
using namespace std;
class overload{
    int xco,yco;
public:
    overload():xco(0),yco(0){}
    overload(int nx,int ny):xco(nx),yco(ny){}
    overload getdata(){
    cout<<"give x cooride ";
    cin>>xco;
    cout<<"give y coordinate ";
    cin>>yco;
    }
    overload operator +(overload);
    void display(){
    cout<<"newxco"<<xco<<endl;
    cout<<"newyco"<<yco<<endl;
    }
};
overload overload :: operator +(overload Ro){
    int newxco=xco+Ro.xco;
    int newyco=yco+Ro.yco;
    overload temp;
    temp.xco=newxco;
    temp.yco=newyco;
    return temp;
}
int main(){
    overload ob1,ob2,add;
    ob1.getdata();
    ob2.getdata();
    add=ob1+ob2;
    add.display();
    add=add+ob1+ob1;
    add.display();

}
