#include<bits/stdc++.h>
using namespace std;

int check(int n)
{
    int count = 0;
    while(n!=0)
    {
        if((n%10)==3)
        {
            count++;
        }
        n=n/10;
    }
    return count;
}


int main()
{
    int n,m,count=0;
    cin>>n>>m;
    for(int i=n;i<=m;i++)
    {
        count+=check(i);
    }
    cout<<count;
}