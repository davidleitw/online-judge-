#include <iostream>
using namespace std;
int main()
{
	int n;	
	while(cin>>n)
	{
		if(n>=1&&n<=1261)	
			cout << "'C' " << "can use printf(" << '"' << "%d" << '"' << ",n); to show integer like " << n << endl;
	}
	return 0;
}
