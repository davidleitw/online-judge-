#include <iostream>
using namespace std;
const double Atomic[4] = {12.01,1.008,16.00,14.01};
void solution(char in,int coe,double &sum)
{
	if(in=='C')
		sum = sum+Atomic[0]*coe;
	if(in=='H')
		sum = sum+Atomic[1]*coe;
	if(in=='O')
		sum = sum+Atomic[2]*coe;
	if(in=='N')
		sum = sum+Atomic[3]*coe;
}
int main()
{
	int line;
	while(cin>>line)
	{
		for(int t=0;t<line;t++)
		{
			string input;
			cin >> input;
			double sum = 0;
			for(int i=0;i<input.length();i++)
			{
				if(isalpha(input[i]))//it's a letter
				{
					int coe = 0;
					if(isdigit(input[i+1]))
					{
						if(isdigit(input[i+2]))
						{
							coe = 10*(input[i+1]-'0') + (input[i+2]-'0');
						}
						else
						{
							coe = input[i+1]-'0';
						}
					}
					else coe = 1;
					//cout << "ch = " << input[i] << endl;
					//cout << "coe = " << coe << endl;
					solution(input[i],coe,sum);
					//cout << "sum = " << sum << endl;
				}
			}
			cout.precision(3);

			cout << fixed << sum << endl;
		}
	}
}
