#include<bits/stdc++.h>
#define long unsigned long long int
using namespace std;
void multiple(long M[2][2])
{
    long X[2][2]= {{1,1},{1,0}};
    int x=M[0][0]*X[0][0]+M[0][1]*X[1][0];
    int y=M[0][0]*X[0][1]+M[0][1]*X[1][1];
    int w=M[1][0]*X[0][0]+M[1][1]*X[1][0];
    int z=M[1][0]*X[0][1]+M[1][1]*X[1][1];
    M[0][0]=x;
    M[0][1]=y;
    M[1][0]=w;
    M[1][1]=z;
}
long fib(int n)
{
    long M[2][2]= {{1,1},{1,0}};
    for(int i=1; i<n-1; i++)
    {
        multiple(M);
    }
    return M[0][0];
}
int main()
{
    int n;
    while(cin>>n)
    {
        long store=fib(n);
        cout<<"The Fibonacci number for "<<n<<" is "<<store<<endl;
    }
}
