#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,e;
    cin>>b>>e;
    long long res=b;
    while(e--)
    {
        res *= b;
    }
    cout<<res;
}