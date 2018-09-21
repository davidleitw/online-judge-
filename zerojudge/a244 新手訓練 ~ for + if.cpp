#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin >> n)
	{
		long long int a[n][3];
		for(int i=0;i<n;i++)
			for(int j=0;j<3;j++)
				cin >> a[i][j];
		
		for(int i=0;i<n;i++)
		{
			if(a[i][0] == 1)
			{
			cout << a[i][1]+a[i][2] << endl;
			}
			else if(a[i][0] == 2)
			{
			cout << a[i][1]-a[i][2] << endl;
			}
			else if(a[i][0] == 3)
			{
			cout << a[i][1]*a[i][2] << endl;
			}
			else if(a[i][0] == 4)
			{
			cout << a[i][1]/a[i][2] << endl;
			}
		}
	}
	
	return 0;
}
