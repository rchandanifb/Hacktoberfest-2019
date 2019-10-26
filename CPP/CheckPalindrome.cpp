/**
 * Given a non empty string s 
 * check it is palindrome or not
 **/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;cin>>s;
	string r=s;
	reverse(r.begin(),r.end());
	if( s == r )
	{
		cout<<"Palindrome"<<endl;
	}
	else
	{
		cout<<"Not a Plindrome"<<endl;
	}
}
