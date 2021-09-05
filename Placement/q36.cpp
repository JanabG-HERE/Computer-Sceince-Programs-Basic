#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    getline(cin,a);
    b=a;
    reverse(a.begin(),a.end());
    int val= a.compare(b);
    if(val==0)
    {
        cout<<"Palindrone";
    }
    else
    {
        cout<<"Not Palindrone";
    }
}