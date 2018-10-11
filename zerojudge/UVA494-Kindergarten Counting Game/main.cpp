#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string input;
	while(getline(cin,input))
	{
		int c = 0;
		for(int i=0;i<input.length()-1;i++)
		{

			if(isalpha(input[i]))
			{
				if(!isalpha(input[i+1]))
				{
					c++;
					//cout << c << " " << input[i] << endl;
				}
			}
		}
		input.clear();
		cout << c << endl;
	}
	return 0;
}
