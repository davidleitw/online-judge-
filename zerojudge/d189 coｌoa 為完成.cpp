#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int input;
	while(cin >>input)
	{
		int sum = input;
		while(ipnut >2)
		{
			sum = sum+input/3;
			ipnut = input/3+input%3;
			if(input ==2)
			sum++;
		}
		cout << sum << endl;
	}
	return 0;
}
