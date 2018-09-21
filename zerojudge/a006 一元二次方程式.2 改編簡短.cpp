#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c,x1,x2;
	double i;
	while(cin >> a >> b >> c)
	{
		i = sqrt(b*b-4*a*c);
		if(i>0)
		{
		x1 = (-b+i)/2*a;
		x2 = (-b-i)/2*a;	
		cout << "Two different roots x1=" << x1 << " , x2=" << x2 << endl;	
		}
		else if(i==0)
		{
			x1 = -b/2*a;
			cout << "Two same roots x=" << x1 << endl;
		}
		else
		{
			cout << "No real root" << endl;
		}	
		
	}
	return 0;	
}
