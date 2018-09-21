#include <iostream>
using namespace std;
int main()
{
	int a,b,t,cmax,count;
	while(cin >>a >>b)
	{
		cout << a << " " << b << " ";
		if(a>b)	
		{
			t = a;
			a = b;
			b = t;
		}
		cmax = 0;
		for(int i=a;i<=b;i++)
		{
			count = 1;t = i;
			while(t!=1)
			{
				if(t%2!=0)
				{
					t = 3*t+1;
					count++;
				}
				else
				{
					t = t/2;
					count++;
				}
			}
			cmax = max(cmax,count);
		}
		cout << cmax << endl;
	}
	return 0;
}
