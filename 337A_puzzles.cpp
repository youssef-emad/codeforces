#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int* a = new int[m] ;
	for (int i= 0; i<m;i++)
	{
		cin>>a[i];	
	}
	sort(a,a+m);
	int min = a[n -1] - a[0];
	for (int i = 1 ; i< (m-n+1); i++)
	{
		if (min > a[n + i -1] - a[i])
			min = a[n + i -1] - a[i];
	}
	cout<<min;
	return 0;
}