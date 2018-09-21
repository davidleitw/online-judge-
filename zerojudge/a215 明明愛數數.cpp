#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin >>n >>m)
	{
		int sum =n;
		int time =1;		
		int i=0;
		while(sum<=m)
		{		
			i++;
			sum = sum+n+i;
			time++;	
		}
		cout << time << endl;
	}
	return 0;
 } 
