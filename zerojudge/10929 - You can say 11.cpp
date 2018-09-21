#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	string input;
	while(cin >> input && input !="0")
	{
		long int sum[2] ={0,0};
		for(int i=0;i<input.length();i++)
			sum[i%2] += input[i]-'0';
		if((sum[0]-sum[1])%11==0)
		cout << input << " is a multiple of 11." << endl;
		else
		cout << input << " is not a multiple of 11." << endl;
	}
	return 0;
}
