#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int a,b;
	int carry,count;
	while(cin >> a >> b)
	{
		carry =0,count =0;
		if(a==0 && b==0) break;
		while(a>0 && b>0)
		{
		carry = (a%10 + b%10 +carry)/10;
		if(carry)
		count ++; 		
		a /=10;
		b /=10;	
		
		}
		if(count ==0)
		cout << "No carry operation." << endl;
		else if(count ==1)
		cout << "1 carry operation." << endl;
		else
		cout << count << " carry operations." << endl;	
	}
	return 0; 
}
