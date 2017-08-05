#include <iostream>
#include <cstdio>
#include <math.h>
#include <set>
using namespace std;

int main()
{
	int x1, y1, x2, y2, nrad;
	cin>>x1>>y1>>x2>>y2;
	cin>>nrad;
	set<pair<long,long> > coordinates;
	int ** radii = new int*[nrad] ;
	for (int i = 0; i < nrad; i++){
		radii[i] = new int [3];
		cin>>radii[i][0]>>radii[i][1]>>radii[i][2];
	}
	int minimum_x = min(x1, x2);
	int maximum_x = max(x1, x2);
	int minimum_y = min(y1, y2);
	int maximum_y = max(y1, y2);
for (int i  =  minimum_x; i<= maximum_x; i++){
	coordinates.insert(pair<long, long>(i, minimum_y));
	coordinates.insert(pair<long, long>(i, maximum_y));
}
for (int i  =  minimum_y; i<= maximum_y; i++){
	coordinates.insert(pair<long, long>(minimum_x, i));
	coordinates.insert(pair<long, long>(maximum_x, i));
}
int output = 0;
set<pair<long,long> >::iterator current_coordinates = coordinates.begin();
while(current_coordinates != coordinates.end()){
	bool inside = false;
	for (int j = 0; j< nrad; j++){
		if (sqrt(pow(current_coordinates->first - radii[j][0],2) + pow(current_coordinates->second - radii[j][1],2)) <= radii[j][2]){
			inside = true;
			break;
		}
	}
	if (! inside){
		output ++;
	}
	current_coordinates++;
}
cout<<output<<endl;
	return 0;
}
