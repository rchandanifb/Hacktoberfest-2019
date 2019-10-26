/**
 * Given an intiger n ( n >= 0 & n <= 1e18 )
 * check it is even or odd.
 **/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;cin>>n;
	if(n&1)
	{
		cout<<"Odd"<<endl;
	}
	else
	{
		cout<<"Even"<<endl;
	}
}

