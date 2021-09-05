#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%400==0)
    {
        cout<<"Leap Year";
    }
    else if(n%100==0)
    {
        cout<<"Not leap year";
    }
    else if(n%4==0)
    {
        cout<<"Leap Year";
    }
    else
    {
        cout<<"Not leap year";
    }
    return 0;
}