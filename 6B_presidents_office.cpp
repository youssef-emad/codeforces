#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int main(){
	int n,m,count = 0;
	char president_color;
	cin>>n>>m>>president_color;
	char grid[102][102];
	map<char,bool> occured;
	occured[president_color] = 1;

	for (int i = 1; i <= n; i++){
		string dummy;
		cin>>dummy;
		for (int j = 1; j<= m;j++){
			grid[i][j] =  dummy[j - 1];
		}
	}

	for (int i = 1; i<= n; i++){
		for (int j = 1 ; j<= m ; j++){
			if (grid[i][j] == president_color){
				if (grid[i + 1][j] != '\0'  && grid[i + 1][j] != '.' && occured[grid[i+1][j]] == 0 && grid[i + 1][j] != president_color){
					count ++;
					occured[grid[i+1][j]] = 1;
				}
				if (grid[i - 1][j] != '\0' && grid[i - 1][j] != '.' && occured[grid[i - 1][j]] == 0 && grid[i - 1][j] != president_color){
					occured[grid[i - 1][j]] = 1;
					count ++;
				}
				if (grid[i][j + 1] != '\0' && grid[i][j + 1] != '.' && occured[grid[i][j + 1]] == 0 && grid[i][j + 1] != president_color){
					occured[grid[i][j + 1]] = 1;
					count ++;
				}
				if (grid[i][j - 1] != '\0' && grid[i][j - 1] != '.' && occured[grid[i][j - 1]] == 0 && grid[i][j - 1] != president_color){
					occured[grid[i][j - 1]] = 1;
					count ++;
				}
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
