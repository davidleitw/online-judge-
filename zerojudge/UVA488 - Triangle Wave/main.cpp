#include <iostream>
using namespace std;
int main()
{
	int line;
	while(cin>>line)
	{

		for(int time1=1;time1<=line;time1++)
		{
			int amplitude,frequence;
			cin>>amplitude>>frequence;

			for(int t=0;t<frequence;t++)//make frequence times waveform
			{
				/*
				for example our amplitude is 3
				than the first for loop print 1
											  22
											  333 */
				for(int i=1;i<=amplitude;i++)
				{
					for(int j=0;j<i;j++)
						cout << i;
					cout << endl;
				}
				/*
				the second for loop print 22
										  1   */
				for(int i=amplitude-1;i>=1;i--)
				{
					for(int j=0;j<i;j++)
						cout << i;
					cout << endl;
				}
				if(t==frequence-1 && time1==line)
					break;
				cout << endl;
			}

		}
	}
	return 0;
}
