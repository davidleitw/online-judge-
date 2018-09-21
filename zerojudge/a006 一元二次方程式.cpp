#include<iostream>
#include <cmath>
using namespace std;
int main()
{
  int a,b,c,d;
  double x1,x2,x3,up1,up2,down;
  cin >> a >> b >> c; 
  d = b*b-4*a*c;
  if(d>0)
  {
  	down = 2*a;
  	up1 = -b+pow(b*b-4*a*c,0.5);
  	up2 = -b-pow(b*b-4*a*c,0.5);
  	x1 = up1/down;
  	x2 = up2/down;
  	cout << "Two different roots x1=" << x1 << " , x2=" << x2 << endl;
  }
  else if(d==0)
  {
	x3 = -(b/(2*a));
  	cout << "Two same roots x=" << x3 << endl;
  }
  else if(d<0)
  {
  	cout << "No real root" << endl;	
  }
return 0; 	
}
