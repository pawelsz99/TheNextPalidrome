#include <iostream>

using namespace std;

int  palindrome (int k)
{
	int k1, k2 = 0, r;
	k1=k;
	while(k1)
	{
		r = k1 % 10;
		k1 = k1 / 10;
		k2 = k2 * 10 + r;
	}	
	if(k==k2)
		return true;
	else 
		return false;
}

int main()
{
	int t; 
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		do
		{
			k++;	
		}while(palindrome(k) != true);
		cout<<k<<endl;
	}
		
	return 0;
}
