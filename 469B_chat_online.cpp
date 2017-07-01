#include <iostream>

using namespace std;

int main(){
	int p,q,l,r;
	cin>>p>>q>>l>>r;
	int** x_values = new int* [q];
	int** z_values = new int* [p];
	for (int i = 0;i<p;i++){
		z_values[i] = new int [2];
		cin>>z_values[i][0]>>z_values[i][1];
	}
	for (int i = 0;i<q;i++){
		x_values[i] = new int [2];
		cin>>x_values[i][0]>>x_values[i][1];
	}
	int count = 0;
	for (int i = l;i<=r;i++){
		bool found = false;
		for (int j = 0; j<p;j++){
			for (int k = 0;k<q;k++){
				int start = x_values[k][0] + i;
				int end = x_values[k][1] + i;
				if ((start >=z_values[j][0] && start <= z_values[j][1]) ||
					(end >=z_values[j][0] && end <= z_values[j][1]) ||
					(start <=z_values[j][0] && end >= z_values[j][1])){
					count++;
					found = true;
					break;
				}
			}
			if (found){
				break;
			}
		}
	}
	cout<<count;
	return 0;
}