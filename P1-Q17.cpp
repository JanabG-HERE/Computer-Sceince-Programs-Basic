#include <bits/stdc++.h>
using namespace std;

int main()
{
	int sum=0,num,n;
	cin>>num;
	int org=num;
	while(num!=0)
	{
		n=num%10;
		num=num/10;
		int f=1; 
		for(int i=1;i<=n;i++)
		{
			f=f*i;
		}
		cout<<"Fact= "<<f<<" ";
		sum=sum+f;
		cout<<"Sum= "<<sum<<endl;
	}
		if(sum==org)
		{
			cout<<"Strong";
		}
		else{
			cout<<"Not Strong";
		}
	return 0;
}
