#include <iostream>
#include <string>
using  namespace std ;

bool is_vowel(char a)
{
	return (a == 'a') || (a == 'o') || (a == 'u') || (a == 'e') || (a == 'y') || (a == 'i');
}
int main()
{
	string a,b ;
	cin>>a ;
	
	for (int i = 0 ; i<a.length() ; i++)
	{
		a[i] = tolower(a[i]);
		if (is_vowel(a[i]))
		{
			a.erase(i,1) ;
			i-- ;
		}
	}
	for (int i = 0 ; i< 2* a.length() ; i++)
	{
		if (i%2 == 0)
		{
			b += '.';
		}else 
		{
			b  +=a[i/2] ;
		}
	}
	cout<<b<<endl;
	return 0 ;
}