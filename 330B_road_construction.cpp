#include <iostream>

using namespace std;

int main(){
	int n,m,square = 0;
	cin>>n>>m;
	bool* available_cities = new bool [n];
	for (int i = 0; i < m; i++){
		int first_city,second_city;
		cin>>first_city>>second_city;
		available_cities[first_city - 1] = true;
		available_cities[second_city - 1] = true;
	}
	for (int i = 0; i<n; i++){
		if (available_cities[i] == false){
			square = i;
			break;
		}
	}
	cout<<n - 1<<endl;
	for (int i = 0; i<n; i++){
		if(i != square){
			cout<<square + 1<<" "<<i + 1<<endl;
		}
	}
	return 0;
}