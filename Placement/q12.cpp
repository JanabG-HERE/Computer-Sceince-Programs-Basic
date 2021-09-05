#include<bits/stdc++.h>
using namespace std;

int fact(int a)
{
    int t = 1;
    while(a!=0)
    {
        t*=a;
        a--;
    }
    return t;
}


int main()
{
    int n,k,sum=0;
    cin>>n;
    int org=n;
    while(n!=0)
    {
        k=n%10;
        sum += fact(k);
        n/=10;
    }
    cout<<sum<<"\n";
    if(sum==org)
    {
        cout<<"Strong Number";
    }
    else
    {
        cout<<"Not Strong";
    }
    return 0;
}