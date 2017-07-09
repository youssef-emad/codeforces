#include <iostream>
#include <map>

using namespace std;

int main(){
	int n;
	map<string,int> database;
	cin>>n;
	for (int i = 0; i<n; i++){
		string input;
		cin>>input;
		if (database[input] == 0){
			cout<<"OK"<<endl;
		}else{
			cout<<input<<database[input]<<endl;
		}	
		database[input]++;
	}
	return 0;
}