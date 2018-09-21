#include <iostream>
using namespace std;
int ans(int n)
{
	int sum=0;
	while(n!=0)
	{
		sum+=n%10;
		n/=10;
	}
	/*if(sum%10!=0)
	{
		sum = ans(sum);
	}*/
	return sum;
}
int main()
{
	int input;
	int sum=0;
	while(cin>>input)
	{
		sum=ans(input);
		if(sum%10!=0)
		{
			sum = ans(sum);
		}	
		cout << sum << endl;
	}
	
}
