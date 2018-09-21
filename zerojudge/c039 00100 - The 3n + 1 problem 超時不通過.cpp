#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin >> a >> b)
	{
		cout << a << " " << b << " ";
		if(a>b)
		{
			int c = a;
				a = b;
				b = c;
		}
		int l_max =0;
		for(int i=a;i<=b;i++)
		{		
			int n = i;
			int l = 1;	
			while(true)
			{
				if(n==0) break;
				if(n%2==0)n/=2;
				else n = 3*n+1;
				l++;
			}
			l_max =max(l_max,l);
		}
		cout << l_max << endl;	
	}
	return 0;
}  
