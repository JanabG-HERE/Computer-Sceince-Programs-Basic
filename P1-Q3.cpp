#include <bits/stdc++.h>
using namespace std;
int main()
{
	char a;
	cin>>a;
	for(int i=65;i<=122;i++)
	{
		if(a==i){
			cout<<i;
			return 0;
		}
	}
	cout<<"Not found";
	return 0;
}


