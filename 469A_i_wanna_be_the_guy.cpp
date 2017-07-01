#include <iostream>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	
	bool* arr = new bool[n] ;
	
	for (int i =0 ; i<n;i++)
	    arr[i] = false;

	for (int i = 0;i<m;i++)
	{
		int a;
		cin>>a;
		arr[a-1] = true;
	}

	cin>>m;
	for (int i = 0;i<m;i++)
	{
		int a;
		cin>>a;
		arr[a-1] = true;
	}

	for (int i = 0;i<n;i++)
	{
		if (arr[i] != true)
		{
			cout<<"Oh, my keyboard!";
			return 0;
		}
	}
	cout<<"I become the guy.";
	return 0;
}