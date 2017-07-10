#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int total = 0, energy = 0;
	int past_number = 0;
	for (int i = 0; i<n; i++){
		int number;
		cin>>number;
		/*cout<<"past number: "<<past_number<<endl;
		cout<<"number: "<<number<<endl;
		cout<<"difference: "<<past_number - number<<endl;
*/		if (energy + past_number - number < 0){
			total += number - past_number - energy;
			energy = 0;
		} else {
			energy += past_number - number;
		}
	past_number = number;
/*	cout<<"total: "<<total<<endl;
	cout<<"energy: "<<energy<<endl;
	cout<<"******************************"<<endl;
*/	}
	cout<<total<<endl;
	return 0;
}
