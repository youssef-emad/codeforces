#include <iostream>
#include <string>
using  namespace std ;

int main()
{
	string team;
	int count = 1;
	cin>>team;
	char last_char = team[0] ;
	for(int i = 1 ; i<team.length() ; i++)
	{
		if (team[i] == last_char)
		{
			count++;
			if (count == 7)
			{
				break;
			}
		}else
		{
			count = 1 ;
			last_char= team[i];
		}
	}
	
	if (count == 7)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;	
	}
	return 0 ;
}