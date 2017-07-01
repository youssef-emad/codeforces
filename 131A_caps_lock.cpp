#include <iostream>
#include <string>
using  namespace std ;

int main()
{
	string word;
	bool check =true;
	cin>>word;
	string out = word ;
	
	for (int i = 1 ; i<word.length() ; i++)
	{
		if (islower(word[i]))
		{
			check = false;
			break;
		}
		out[i] = tolower(out[i]);
	}
	if(check)
	{
		if(islower(word[0]))
		{
			out[0] = toupper(word[0]);	
		}else
		{
			out[0] = tolower(word[0]);	
		}
		cout<<out<<endl ;		
	}else
	{
		cout<<word<<endl ;
	}
	return 0 ;
}