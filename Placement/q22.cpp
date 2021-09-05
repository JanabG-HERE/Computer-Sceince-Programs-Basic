#include<bits/stdc++.h>
using namespace std;

int rev(int a)
{
    int result=0;
    while(a!=0)
    {
        result = (result*10) + a%10;
        a=a/10;
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    if(n==rev(n))
    {
        cout<<"Palindrone";
    }
    else
    {
        cout<<"Not Palindrone";
    }
    return 0;
}