#include <iostream>

using namespace std;

int main()
{
	int n,m,k,c=0,cc=0;
	cin>>n>>m>>k;
	int* arr = new int[m+1];
	for (int i = 0 ; i<m+1;i++)
	{
		cin>>arr[i];
	}
	for (int i =0 ; i<m;i++)
	{
	    int t = (arr[i] ^ arr[m]);
	    
	    for(int j = 0; j < n; j++)
        {
            if ((t & (1 << j)) != 0)
            {
                c++;
            }
        }
      
        if (c <= k)
            cc++;
        c =0;
	}
	cout<<cc;
	return 0;
}