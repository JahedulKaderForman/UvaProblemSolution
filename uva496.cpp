#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
string A,B;
int main()
{
    int a,b,x,y;
    while(getline(cin,A))
    {
        getline(cin,B);
        int num,num2,cn,ln1,ln2;
        stringstream ss(A);
        stringstream s2(B);
        vector<int>set_A;
        vector<int>set_B;
        while(ss>>num)
        {
            set_A.push_back(num);
        }
        while(s2>>num2)
        {
            set_B.push_back(num2);
        }
        ln1=set_A.size();
        ln2=set_B.size();
        cn=0;
        for(int i=0; i<ln1; i++)
        {
            for(int j=0; j<ln2; j++)
            {
                if(set_A[i]==set_B[j])
                {
                    cn++;
                }
            }
        }
        if(ln1==ln2 && ln1==cn)
            cout<<"A equals B"<<endl;
        else if(cn==0)
            cout<<"A and B are disjoint"<<endl;
        else if(ln1>ln2 && ln2==cn)
            cout<<"B is a proper subset of A"<<endl;
        else if(ln2>ln1 && ln1==cn)
            cout<<"A is a proper subset of B"<<endl;
        else
            cout<<"I'm confused!"<<endl;





    }



}
