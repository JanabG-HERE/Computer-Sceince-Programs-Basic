#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    if(a[0]>='a' && a[0]<='z')
    {
        a[0]=a[0]-32;
    }
    if(a[a.size()-1]>='a' && a[0]<='z')
    {
        a[a.size()-1]=a[a.size()-1]-32;
    }

    cout<<a;
}