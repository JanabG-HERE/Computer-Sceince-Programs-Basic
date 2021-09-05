#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int counter=0,maxcount=0;
    string si = to_string(n);
    for(int i=0;i<si.size();i++)
    {
        if(si[i]=='0')
        {
            counter++;
            if(counter>maxcount)
            {
                maxcount=counter;
            }
        }
        else
        {
            counter=0;
        }
    }
    cout<<maxcount;

}