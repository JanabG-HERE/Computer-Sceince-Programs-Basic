#include<bits/stdc++.h>
using namespace std;

// Step 1 − Input the number to be checked at run time.
// Step 2 − Repeat from i = 2 to (num/2).
// Step 3 − Check i is a prime number.
// Step 4 − If i is prime, check if (n - i) is a prime number.
// Step 5 − If both (i)and (n - i) are primes, 
// then, the given number can be represented as the sum of primes i and (n - i).

int prime(int a)
{
    if(a<=1)
    {
        return -1;
    }
    int flag=0;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        return a;
    }
    else
    {
        return -1;
    }
}


int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        int res= prime(i);
        if(res!=-1)
        {
            if(prime(n-i)!=-1)
            {
                cout<<"Yes = "<<i<<" + "<<(n-i)<<" = "<<i+(n-i);
                return 0;
            }
            else
            {
                continue;
            }
        }
        else
        {
            continue;
        }
    }
    cout<<"No";
    return 0;
}