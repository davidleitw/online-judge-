#include <iostream>
#include <string>
using namespace std;
int main()
{
	int line;
	while(cin>>line)
	{
		for(int t=0;t<line;t++)
		{
			int n;
			cin>>n;
			string input;
			int countarr[10] = {};
			for(int i=1;i<=n;i++)
			{

				input+=to_string(i);
			}
			//cout << "input = " << input << endl;
			for(int i=0;i<input.length();i++)
			{
				//cout << input[i]-'0' << " ";
				countarr[input[i]-'0']++;
			}
			//cout << endl;
			for(int i=0;i<9;i++)
				cout << countarr[i] << " ";
			cout << countarr[9] << endl;
		}
	}
	return 0;
}
