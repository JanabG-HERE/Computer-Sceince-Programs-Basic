#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,n,sum=0;
    cin>>p>>n;
    for(int i=p;i<=n;i++)
    {
        sum+=i;
    }
    cout<<sum;
}