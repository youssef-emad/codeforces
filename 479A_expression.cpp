#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int arr[6] = {a+b+c,a*b*c, a*(b+c),a+(b*c),(a+b)*c,(a*b)+c};
	sort(arr,arr+6);
	cout<<arr[5];
	return 0;
}