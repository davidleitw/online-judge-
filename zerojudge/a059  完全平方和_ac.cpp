#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	while(cin >>n)
	{
		int i1;
		for(i1=0;i1<n;i1++)
		{
			int sum,m,n,i,j;
			sum = 0;	
			cin >> m >>n;
			for(i=m;i<=n;i++)
			{
				for(j=1;j<=sqrt(n);j++)	
				{
					if(i ==pow(j,2))		
						sum = sum+i;
				}
			}
			cout << "Case " << i1+1 << ": " << sum << endl;
		}
	}
	
	return 0;
}
