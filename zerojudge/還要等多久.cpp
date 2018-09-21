#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	while(cin >>n)
	{
		if(n>=0 && n<=55 && n!=26)
			cout << abs(25-n) << endl;
		else if(n>=55 && n<=59)
			cout << (60-n)+25 << endl;
		else if (n == 26)
			cout << 59 << endl;
	}
	return 0;
 } 
