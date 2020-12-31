#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,i=1,sum=0;
	cin>>a;
	cout<<a<<endl;
	while(i<=(a/2))
	{
		cout<<i<<" "<<a/2<<endl;
		if(a%i==0){
			sum+=i;
			cout<<sum<<endl;
		}
		i++;
	}
	if(sum==a)
		cout<<"Perfect Number";
	else
		cout<<"Not";
	return 0;
}
