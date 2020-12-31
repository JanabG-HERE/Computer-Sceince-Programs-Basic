#include <bits/stdc++.h>
#include <cmath>
using namespace std;

	

int main()
{
	int a,b,i;
	cin>>a>>b;
	for(i=a>b?a:b;i<=a*b;i=i+(a>b?a:b))
	{
		if(i%a==0 && i%b==0){
			cout<<i;
			return 0;
		}
	}
}





