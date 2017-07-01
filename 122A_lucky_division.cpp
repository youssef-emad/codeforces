#include <iostream>
#include <string>
using  namespace std ;

int main()
{
	int n;
	cin>>n;
	
	bool lucky_check = false;
	bool most_luck = false ;
	for (int j = 0 ; j<1000 ; j++)
	{
		string a = to_string(j);
		for (int i = 0 ; i<a.length() ; i++)
		{
			if(a[i] != '4' && a[i] != '7')
			{
				lucky_check = false;
				break;
			}else
			{
				lucky_check = true;
			}
		}	

		if(lucky_check)
		{
			if(n%j == 0)
			{
				most_luck = true;
				break;
			}
		}
	}
	if(most_luck)
	{
		cout<<"YES"<<endl;
	}else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}