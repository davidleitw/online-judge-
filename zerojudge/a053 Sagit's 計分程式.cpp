#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin >>n)
	{
		int point = 0;
		if(n<=10)
		point = n*6;
		else if(n>10 && n<=20)
		point = 60+(n-10)*2;
		else if(n>21 && n<=40)	
		point = 80+(n-20)*1;
		else 
		point = 100;
		cout << point << endl;
	}
	return 0;
 } 
