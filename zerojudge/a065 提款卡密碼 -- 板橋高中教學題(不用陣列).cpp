#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	string str;
	while(cin >>str)
	{
		for(int i=0;i<str.length()-1;i++)		
		{
			n = str[i] - str[i+1];	
			cout << abs(n);		
		}
		cout << endl;
	}
	return 0;
}
