#include <iostream>

using namespace std;

int main(){
	int n,max = 0;
	cin>>n;
	int * numbers = new int [n];
	for (int i = 0; i<n;i++){
		cin>>numbers[i];
	}
	for(int i = 0; i<n; i++){
		int count = 1;
		for (int j = i; j > 0 ; j--){
			if (numbers[j] >= numbers[j - 1]){
				count++;
			}else{
				break;
			}
		}
		for (int j = i; j<n - 1; j++){
			if (numbers[j] >= numbers[j + 1]){
				count ++;
			}else{
				break;
			}
		}
		if (count > max)
			max = count;
	}
	cout<<max<<endl;
	return 0;
}