#include <iostream>
#include <string>
#include <algorithm>

using  namespace std ;

int main()
{
	string word;
	int numbers[100];
	cin>>word;
	for (int i = 0 ; i<word.length() ; i = i+2)
	{
		numbers[i/2] = int(word[i]) - 48;
	}
	std::sort(numbers, numbers + (word.length()+1)/2);
	
	cout<<numbers[0];
	for (int i = 1; i< (word.length()+1)/2; i++)
	{
		cout<<"+"<<numbers[i] ;
	}
	return 0;
}