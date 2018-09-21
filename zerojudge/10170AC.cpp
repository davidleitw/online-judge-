#include <iostream>
using namespace std;
int main()
{
	long long int start,day,t,sum;
	while(cin>>start>>day)
	{
		sum=0;	
		t=start;
		while(sum<day)
		{	
			sum+=t;
			t++;
		}
		cout << t-1 << endl;		
	}
	return 0;
 } 
