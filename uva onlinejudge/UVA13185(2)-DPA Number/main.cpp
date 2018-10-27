#include <iostream>
using namespace std;
int main()
{
	int line;
	while(cin>>line)
	{
		for(int time=0;time<line;time++)
		{
			int input;
			int sum = 0;
			cin>>input;
			for(int i=1;i<input;i++)
			{
				if(input%i==0)
					sum+=i;
			}
			cout << sum << endl;
			if (sum==input)
				cout << "perfect" << endl;
			else if (sum<input)
				cout << "deficient" << endl;
			else
				cout << "abundant" << endl;
		}
	}
	return 0;
}
