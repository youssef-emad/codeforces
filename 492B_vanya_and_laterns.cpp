#include<iostream>
#include<algorithm>
#include <iomanip>

using namespace std;

int main()
{
	long n,m;
	double max = 0;
	cin>>n>>m;
	double * arr = new double[n];
	for (int i = 0 ; i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);

	for (int i =0 ; i<n-1;i++)
	{
		if (arr[i+1] - arr[i] > max)
			max = arr[i+1] - arr[i];
	}
	
	double arr2[3] = {max/2,m - arr[n-1],arr[0]};
	sort(arr2,arr2+3);
	cout<<fixed << setprecision(14)<<arr2[2];
	return 0;
}