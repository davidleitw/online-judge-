#include <iostream>
using namespace std;
int main()
{
	string input;bool c = 1;
	while(getline(cin,input))
	{
		for(int i=0;i<input.length();i++)
		{
			if(input[i]=='"')
			{
				if(c)
					cout << "``";
				else if(!c)
					cout << "''";
				c = !c;
			}
			else
				cout << input[i];
		}
		cout << endl;
	}
	return 0;
}
