#include <iostream>
using namespace std;
int main()
{
	unsigned int data[100];
	unsigned int n,m;
	bool ans = true;

	while(cin >>n >>m)
	{

		data[0] = n;
		int c = 1;//count
		while(true)
		{
			if(n==0 || m==0 || n==1 || m==1)
			{
				ans = false;
				break;
			}
			if(n%m!=0)
			{
				ans = false;
				break;
			}

			n /= m;
			data[c] = n;
			c += 1;

			if(n==1)
			{
				ans = true;
				break;
			}
		}
		if(ans)
		{
			cout << data[0];
			for(int i=1;i<c;i++)
				cout << " " << data[i];
			cout << endl;
		}
		else
		{
			cout << "Boring!" << endl;
		}

	}
	return 0;
}
