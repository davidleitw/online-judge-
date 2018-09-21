	#include <iostream>
	using namespace std;
	int main()
	{
		int n;
		while(cin >>n)
		{
			
			int a[n];
			for(int i=0;i<n;i++)
			{
				cin >> a[i];
			}
			
			for(int i=0;i<n;i++)
			{
				if(a[i]==0)
				{
					cout << 0 << endl;
					continue;
				}
				int	ans =1;
				while(a[i]!=0)
				{
					ans = ans*(a[i]%10);
					a[i]/=10;
				}
				cout << ans << endl;
			}
		}
		return 0;
	}
