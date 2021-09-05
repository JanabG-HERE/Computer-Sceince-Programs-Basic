#include<bits/stdc++.h>
using namespace std;

int rev(int a)
{
    int sum=0;
    while(a!=0)
    {
        sum= (sum*10) + a%10;
        a=a/10;
    }
    return sum;
}

int main()
{
    int n,res=0;
    cin>>n;
    while(n!=0)
    {
        if(n%10==0)
        {
            res=(res*10)+ 1;
            n=n/10;
        }
        else
        {
            res=(res*10)+n%10;
            n=n/10;
        }
    }
    cout<<rev(res);
}