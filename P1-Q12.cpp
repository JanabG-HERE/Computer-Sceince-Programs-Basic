#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
	long n,sum=0;
	cin>>n;
	while(n!=0)
	{
		sum=sum+(n%10);
		n=n/10;
	}
	cout<<sum;
	return 0;
}




