#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int t1=-1,t2=1,t3;
	//cout<<t1<<" "<<t2<<" ";
	for(int i=0;i<n;i++)
	{
		t3=t1+t2;
		cout<<t3<<" ";
		t1=t2;
		t2=t3;
	}
	return 0;
}



