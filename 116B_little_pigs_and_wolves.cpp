#include <iostream>

using namespace std;

int main(){
	int n,m,count = 0;
	cin>>n>>m;
	char grid[11][11];
	for (int i = 1; i<=n;i++){
		for (int j = 1; j<=m; j++){
			cin>>grid[i][j];
		}
	}

	for (int i = 1; i<=n;i++){
		for (int j = 1; j<=m; j++){
			if (grid[i][j] == 'W'){
				if (grid[i - 1][j] == 'P' || grid[i + 1][j] == 'P' || grid[i][j - 1] == 'P' || grid[i][j + 1] == 'P'){
					count++;
				}
			}
		}
	}
	cout<<count<<endl;
	return 0;
}