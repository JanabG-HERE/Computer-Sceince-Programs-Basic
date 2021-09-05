#include<bits/stdc++.h>
using namespace std;

void copy(string &a, string &b)
{
    b=a;
    return;
}

int main()
{
    string str1,str2;
    getline(cin,str1);
    copy(str1,str2);
    cout<<str2;
}