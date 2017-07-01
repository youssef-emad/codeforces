#include <iostream>
#include <string>

using namespace std;

int main()
{
	string n;
	cin>>n;
	while(n.find("WUB") != std::string::npos)
	{
		int a = n.find("WUB");
		n.erase(a,3);
		if (a != 0 && !(n[a+1] == ' ' || n[a-1] == ' '))
		{
			n.insert(a," ");
		}
	}
	cout<<n;
	return 0;
}