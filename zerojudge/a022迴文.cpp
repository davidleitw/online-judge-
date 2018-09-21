#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;
int main()
{
	string input;
	while(cin >>input)
	{
		string input_2;
		input_2 = input;
		reverse(input_2.begin(),input_2.end());
		if(input == input_2)
		cout << "yes" << endl;
		else
		cout << "no" << endl;
	}
	
	
	return 0;
}
