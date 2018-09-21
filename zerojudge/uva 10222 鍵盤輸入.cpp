#include <iostream>
using namespace std;
int main()
{
	string c = "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";	
	string input;
	while(getline(cin,input))	
	{
		for(int i=0;i<input.length();i++)
		{
			for(int j=0;j<45;j++)
			{
				if(input[i]==c[j])
					input[i] = c[j-2];	
			}	
		}
		cout << input << endl;
	}
	return 0;
}
