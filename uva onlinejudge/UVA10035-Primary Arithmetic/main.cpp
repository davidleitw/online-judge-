#include <iostream>

using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b,a!=0&&b!=0)
	{
		int carry = 0;
		int dight = 0;
		while(a!=0||b!=0)
		{
			if(a%10 + b%10 + carry>=10)
			{
				dight++;
				carry = 1;
			}
			else { carry = 0; }
			a/=10;
			b/=10;
		}
		if (dight==0) { cout << "No carry operation." << endl; }
        else if (dight==1) { cout << "1 carry operation." << endl; }
        else { cout << dight << " carry operations." << endl; }
	}
    return 0;
}
