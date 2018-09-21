#include <iostream>
using namespace std;
int gcd(int m,int n);
int main()
{
	int n;	
	while(cin >>n)
	{
		int g = 0;
		if(n==0)
		break;
		for(int i=1;i<n;i++)
			for(int j=i+1;j<=n;j++)	
				g = g+gcd(i,j);		
		cout << g << endl;
	}
	return 0;
}
int gcd(int m,int n)
{
	int temp,temp_gcd;
	if(m>n)
	{
		temp = m;
		m    = n;
		n = temp;
	}
	while(m!=0)
	{
		temp_gcd = n%m;	
		n =   m;
		m =   temp_gcd;
	}
	return n;
}
