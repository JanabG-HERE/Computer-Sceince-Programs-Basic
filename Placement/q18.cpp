#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int org=n;
    while(n!=0)
    {
        int k = n%10;
        sum=sum+(k*k*k);
        n=n/10;
    }
    cout<<sum<<"\n";
    if(sum==org)
    {
        cout<<"Armstrong Number";
    }
    else
    {
        cout<<"Not Armstrong";
    }
    return 0;
}