#include <iostream>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int* sum_array = new int [n + 1];
	int index = 0;
	for (int i = 0; i<n; i++){
		int number;
		cin>>number;
		sum_array[i + 1] = number + sum_array[i];
	}
	int min = sum_array[n];
	for (int i = 0; i< n ; i++){
		int end = i + k;
		if (end > n){
			break;
		}else{
			int height = sum_array[end] - sum_array[i];
			if (height < min){
				min = height;
				index = i;
			}
		}
	}
	cout<<index + 1<<endl;
	return 0;
}