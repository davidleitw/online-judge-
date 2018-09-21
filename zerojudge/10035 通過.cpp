#include <iostream>
using namespace std;
int main()
{
	int n1,n2;
	while(cin >>n1 >>n2)
	{
		if(n1==0 && n2==0)
			break;
		int count=0;
		int carry=0;
		while(n1||n2)
		{
			carry = n1%10+n2%10+carry;
			carry/=10;
			if(carry!=0)
				count+=1;
			n1/=10;
			n2/=10;
		}
		if(count==0)
			cout << "No carry operation." << endl;
		if(count==1)
			cout <<	1 << " carry operation." << endl;
		if(count>1)
			cout <<	count << " carry operations." << endl;
	}
	return 0;
}
