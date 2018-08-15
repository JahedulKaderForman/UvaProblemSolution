#include<iostream>
#include<stack>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    string s,s1;
    int i,j,test;
    scanf("%d",&test);
    getchar();
    for(i=0; i<test; i++)
    {
        getline(cin,s);
        {
            stack<char>stk;
            for(j=0; j<s.size(); j++)
            {

                if( stk.size()>0 and s[j]==')'  and stk.top()=='(')
                {
                    stk.pop();
                }
                else if( stk.size()>0 and s[j]==']' and stk.top()=='[')
                {
                    stk.pop();
                }
                else
                    stk.push(s[j]);
            }
            if(stk.size()==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }


    return 0;
}
