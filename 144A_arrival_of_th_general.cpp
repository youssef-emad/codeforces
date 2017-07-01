#include <iostream>

using namespace std;

int main()
{
	int n,c=0;
	cin>>n;
	int* arr = new int[n];
	for (int i = 0 ;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int max_index =0,max=arr[0];

	for(int i =1 ; i<n;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			max_index = i;
		}
	}

	for (int i = max_index ; i>0 ; i--)
	{
		int t = arr[i];
		arr[i] = arr[i-1];
		arr[i-1] = t;
		c++;
	}
	
	int min_index =1,min=arr[1];

	for(int i =2 ; i<n;i++)
	{
		if (arr[i] <= min)
		{
			min = arr[i];
			min_index = i;
		}
	}

	for (int i = min_index ; i<n-1 ; i++)
	{
		int t = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = t;
		c++;
	}
	cout<<c;
	return 0;
}