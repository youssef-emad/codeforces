#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,m;
	int ashkat_winner =  0;
	cin>>n>>m;
	int s = n*m;
	while(s !=0)
	{
		s = (n*m) - (n+m -1);
		n--;
		m--;
		ashkat_winner++;
	}
	if(ashkat_winner%2 !=0)
		cout<<"Akshat";
	else
		cout<<"Malvika";
	return 0;
}