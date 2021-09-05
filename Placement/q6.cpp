#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int st=0, et= 1;
    for(int i=0;i<n;i++)
    {
        if(i<=1)
        {
            cout<<i<<" ";
        }
        else
        {
            cout<<st+et<<" ";
            st=et;
            et=i;
        }

    }
    return 0;
}