#include <iostream>
#include <string>
#include <algorithm>

using  namespace std ;

int main()
{
	string word;
	cin>>word;
	std::sort(word.begin(), word.end());
	int count = 1;
	char last_repeated_char = ' ';
	for (int i = 1 ; i<word.length() ; i++)
	{
		if (word[i] == word[i-1])
		{
			last_repeated_char = word[i] ;
		}else
		{
			count++;			
		}
	}

	if(count%2 == 0)
	{
		cout<<"CHAT WITH HER!"<<endl;
	}else
	{
		cout<<"IGNORE HIM!"<<endl;
	}
	return 0;
}