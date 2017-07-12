#include <iostream>
#include <map>
using namespace std;

int main(){

	map<long,long> indeces;

	int n,m;
	long long count1 = 0, count2 = 0;
	cin>>n;
	for (int i = 0; i<n; i++){
		int number;
		cin>>number;
		indeces[number] = i;
	}
	cin>>m;
	for (int i = 0; i<m; i++){
		int number;
		cin>>number;
		count1 += indeces[number] + 1;
		count2 += n - indeces[number];
	}
	cout<<count1<<" "<<count2<<endl;
	return 0;
}