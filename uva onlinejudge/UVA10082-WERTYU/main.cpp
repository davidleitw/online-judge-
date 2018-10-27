#include <iostream>
using namespace std;
int main()
{
	string input;
	string ch = "`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
	while(getline(cin,input))
	{
		for(int i=0;i<input.length();i++)
		{
			for(int j=0;j<ch.length();j++)
			{
				if(input[i]==ch[j])
					input[i] = ch[j-1];
			}
		}
		cout << input << endl;
		input.clear();
	}
	return 0;
}
