#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<=0 || n>=13)
    {
        cout<<"Invalid";
    }
    if(n<=7 && n%2!=0)
    {
        cout<<"31 Days";
    }
    else if(n==2)
    {
        cout<<"28 days or 29 days";
    }
    else if(n>=8 && n%2==0)
    {
        cout<<"31 Days";
    }
    else{
        cout<<"30 days";
    }
    return 0;
}