#include<bits/stdc++.h>
using namespace std;

int prime(int n)
{
    int flag=0;
    if(n<=1)
    {
        return 0;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        return n;
    }
    else
    {
        return 0;
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
        int res=prime(i);
        if(res!=0)
        {
            cout<<res<<" ";
        }
    }
    return 0;
    
}