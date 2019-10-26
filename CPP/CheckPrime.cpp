/**
 * Given an intiger n ( n >= 1 & n <= 1e12 )
 * check it is prime or not
 **/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<"Not Prime"<<endl;
			return 0;
		}
	}
	cout<<"Prime"<<endl;
	return 0;	
}

//O( sqrt(n) ) solution
