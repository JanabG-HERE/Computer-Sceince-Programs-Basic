#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0)
    {
        cout<<"First Quadrant";
    }
    else if(x<0 && y>0)
    {
        cout<<"Second Quadrant";
    }
    else if(x<0 && y<0)
    {
        cout<<"Third Quadrant";
    }
    else if(x>0 && y<0)
    {
        cout<<"Fourth Quadrant";
    }
    else
    {
        cout<<"Point Zero";
    }
    return 0;
}