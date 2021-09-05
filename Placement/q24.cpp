#include<bits/stdc++.h>
using namespace std;

int arm(int n)
{
    int res=0,org=n;
    while(n!=0)
    {
        int k=n%10;
        res = res + (k*k*k);
        n=n/10; 
    }
    if(res==org)
    {
        return res;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    if(a<=0)
    {
        a=0;
    }
    if(b<=0)
    {
        b=0;
    }
    for(int i=a;i<=b;i++)
    {
        int k= arm(i);
        if(k!=-1)
        {
            cout<<k<<" ";
        }
    }
    return 0;
}