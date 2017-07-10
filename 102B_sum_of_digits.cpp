#include <iostream>
#include <string> 

using namespace std;

int main(){

	string input;
	long long sum = 0;
	int count = 0;
	cin>>input;
	int length = input.length();
	while(length != 1){
		count++;
		for (int i = 0; i<length ; i++){
			sum += int(input[i] - '0');
		}
		input = std::to_string(sum);
		sum = 0;
		length = input.length();
	}
	cout<<count<<endl;
}
