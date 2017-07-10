#include <iostream>

using namespace std;

int main(){

	int n,a;
	cin>>n>>a;
	int * cities = new int[n];

	for(int i = 0; i<n; i++){
		cin>>cities[i];
	}

	int start = a - 1;
	int end = a - 1;
	int number_of_criminals = 0;
	int can_catch = 0;
	int old_number_of_criminals = 0, old_number_of_cities = 0;
	while(!(start < 0 && end >= n)){

		start = max(start,0);
		end = min(end,n - 1);		
		int number_of_cities = end - start + 1;	
		if (start != end)
			number_of_criminals += cities[start] + cities[end];
		else
			number_of_criminals += cities[start];
		if (start == 0)
			cities[0] = 0;
		if (end == n - 1)
			cities[end] = 0;
/*		cout <<"start: "<<start<<endl;
		cout<<"end: "<<end<<endl;
		cout<<"number of cities: "<<number_of_cities<<endl;
		cout<<"number of criminals: "<<number_of_criminals<<endl;
		cout<<"***************"<<endl;
	*/	start -= 1;
		end += 1;
		if (number_of_cities - old_number_of_cities == number_of_criminals - old_number_of_criminals){
			can_catch += number_of_criminals - old_number_of_criminals;
		}
		old_number_of_cities = number_of_cities;
		old_number_of_criminals = number_of_criminals;
	//	cout<<"can catch: "<<can_catch<<endl;
	}
cout<<can_catch<<endl;
}
