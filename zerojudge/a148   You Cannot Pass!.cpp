#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin >>n)
	{
		long double ave =0;
		int a;
		for(int i=0;i<n;i++)
		{
			cin >>a;
			ave = ave+a;
		}
		ave = ave/n;
		if(ave<=59)
		cout << "yes" << endl;
		else 
		cout << "no"  << endl;
	}
	return 0;
 } 
