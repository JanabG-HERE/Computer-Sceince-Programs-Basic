#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum=0;
    cin>>n;
    for(long long i=1;i<=n-1;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        cout<<"Perfect Number";
    }
    else
    {
        cout<<"Not Perfect";
    }
}