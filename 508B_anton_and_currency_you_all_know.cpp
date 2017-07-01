#include <iostream>
#include <string>

using namespace std;

void swap(char& a, char& b)
{
	char temp = a;
	a = b;
	b = temp; 
}

int main()
{
	string num;
	cin>>num;
	bool swapped = false;
	unsigned int length = num.length();
	unsigned int* even_numbers = new unsigned int[length];
	unsigned int index = 0;
	for(unsigned int i = 0; i<length; i++)
	{
    	if(int(num[i])%2 == 0)
    	{
    		even_numbers[index] = i ;
    		index++;
    		if(int(num[i]) < int(num[length - 1]))
    		{
    			swap(num[i],num[length - 1]);
    			swapped = true;
    			break;
    		}
    	}
	}

	if(swapped)
	{
		cout<<num<<endl;
	}else if (index != 0)
	{
		swap(num[even_numbers[index - 1]],num[length - 1]);
		cout<<num<<endl;
	}else
	{
		cout<<-1<<endl;
	}
	return 0;
}