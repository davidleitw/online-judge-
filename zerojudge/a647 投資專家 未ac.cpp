#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,m,p;
	while(cin >>n)
	{
		double input[n][2];	
		int i,j;
		for(i=0;i<n;i++)
			for(j=0;j<2;j++)
				cin >> input[i][j];
		double ouput;
		for(int z=0;z<n;z++)
		{
			ouput = (input[z][1]-input[z][0])/input[z][0];
			if(ouput >=0.1 || ouput <=0.07)
				cout << fixed << setprecision(2) << setfill('0') << ouput*100 << "% dispose" << endl;
			else if(ouput == 0.0)
				cout << "0.00% keep" << endl;	
			else
				cout << setprecision(4) << setfill('0') << ouput*100 << "% keep" << endl;
		}	
	}
	return 0;
 } 
