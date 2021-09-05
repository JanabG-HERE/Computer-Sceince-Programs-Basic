#include<bits/stdc++.h>
using namespace std;

int check(int n)
{
    int count=1;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    //cout<<n<<" = "<<count<<"\n";
    if(count==9)
    {
        return n;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int n;
    cin>>n;
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        int k=check(i);
        if(k!=0)
        {
            cout<<k<<" ";
            flag++;
        }
    }
    if(flag=0)
    {
        cout<<"Not Found";
    }
    return 0;
}