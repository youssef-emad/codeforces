#include <iostream>

using namespace std;

int main()
{
	long long n,k;
	cin>>n;
	k = n/2 - (n%2)*n;
	cout<<k;
	return 0;
} 