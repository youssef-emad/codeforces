#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	long m;
	int n;
	cin>>m>>n;
	long * dirty_steps = new long[n];
	for (int i =0 ; i<n; i++){
		cin>>dirty_steps[i];
	}
	sort(dirty_steps,dirty_steps + n);
	
	int count = 0;
	int first_clean = 0;
	int second_clean = 1;
	bool dirty_found = 0;
	bool can = 1;
	if (dirty_steps[0] == 1 || dirty_steps[n - 1] == m){
		can = 0;
	}else{
		for (int i = 1; i<=m; i++){
			if(dirty_found && i != dirty_steps[count]){
				second_clean = i;
				if (second_clean - first_clean > 3){
					can = 0;
					break;
				} else{
					first_clean = i;
					dirty_found = 0;
				}
			}else if (i == dirty_steps[count]){
				dirty_found = 1;
				count++;
			} else {
				first_clean++;
			}
		}
	}
	if (can){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}