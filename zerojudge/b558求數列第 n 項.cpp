#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin >>n)
	{
		int arr[n];
		arr[0] = 1;
		for(int i=1;i<n;i++)
		{	
			arr[i] = arr[i-1]+i;
		}
		cout << arr[n-1] << endl;
	
	}
	return 0;
} 
