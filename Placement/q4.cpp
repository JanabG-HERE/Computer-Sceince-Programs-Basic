#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp=0;
    cin>>n;
    while(n!=0)
    {
        n/=10;
        temp++;

    }
    cout<<temp;
}