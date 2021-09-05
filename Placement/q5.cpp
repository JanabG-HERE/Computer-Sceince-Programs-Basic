#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,fac=1;
    cin>>n;
    while(n!=0)
    {
        fac*=n;
        n--;
    }
    cout<<fac;
}