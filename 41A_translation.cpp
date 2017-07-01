#include<iostream>
#include<string>

using namespace std;

int main()
{
	string one,two;

	cin>>one>>two;
	if (one.length() != two.length())
	{
		cout<<"NO";
	}
	else
	{
		int n = one.length();
		for (int i =0; i< n;i++)
		{
			if(one[i] != two[n-i-1])
			{
				cout<<"NO";
				return 0;
			}
		}
		cout<<"YES";
	}
	return 0;
}