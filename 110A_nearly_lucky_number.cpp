#include <iostream>
#include <string>
using  namespace std ;

int main()
{
	string s,r;
	int count = 0 ;
	bool check = false;
	cin>>s;
	
	for (int i = 0 ; i<s.length() ; i++)
	{
		if(s[i] == '4' || s[i] == '7')
		{
			count ++;
		}
	}
	r = to_string(count);
	for(int i =0 ;i<r.length() ;i++)
	{
		if(r[i] != '4' && r[i] != '7')
		{
			check = false;
		}else
		{
			check = true;
		}
	}
	if(check)
	{
		cout<<"YES"<<endl;
	}else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}