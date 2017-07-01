#include <iostream>
#include <map>
using namespace std;

int main(){
	int n;
	cin>>n;
	int values[100000][2];
	map<int,int> home;
	for(int i = 0;i<n;i++){
		cin>>values[i][0]>>values[i][1];
		home[values[i][0]]++;
	}
	for (int i = 0; i<n;i++){
		int result = n - 1 + home[values[i][1]];
		cout<< result << " " << 2 * (n - 1) - result <<endl;
	}
	return 0;
}