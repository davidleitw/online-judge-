#include <iostream>
using namespace std;
int main()
{
	string input;
	int t;
	while(cin>>t)
	{
		for(int t1=0;t1<t;t1++)
		{
			cin>>input;
			int sum = 0;
			int time = 0;
			for(int i=0;i<input.length();i++)
			{
				if(input[i]=='O')
				{
					time++;
					sum+=time;
				}
				if(input[i]=='X') { time = 0; }
			}
			cout << sum << endl;
		}
	}
	return 0;
}
