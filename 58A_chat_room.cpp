#include <iostream>
#include <string>  
#include <algorithm>

using  namespace std ;

int main()
{
	string s;
	string hello = "hello";
	char last_char = 'h' ;
	int c = 1 ;
	int l_count = 0;

	cin>>s;
	for(int i = s.find("h") ; i<s.length() ; i++)
	{
		char test = s[i];
		if(s[i] == 'h' ||s[i] == 'e' ||s[i] == 'l' ||s[i] == 'o')
		{
			if(s[i] != last_char)
			{
				if(s[i] == hello[c])
				{
					c++ ;
					if (c ==5)
						break;
					if(s[i] == 'l')
						l_count++ ;
					if(s[i] == 'l' && l_count<2)
					{
						last_char='e';
					}
					else
					{
						last_char = s[i];				
					}
				}
			}	
		}
	}

	if(c==5)
	{
		cout<<"YES"<<endl;
	}else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}