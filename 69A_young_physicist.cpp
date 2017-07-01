#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int x,y,z;
	int sumz=0,sumy=0,sumx=0;

	for (int i =0 ;i<n;i++)
	{
		cin>>x>>y>>z;
		sumx += x;
		sumy +=y;
		sumz += z;
	}
	if(sumx !=0 || sumy != 0 || sumz !=0)
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}