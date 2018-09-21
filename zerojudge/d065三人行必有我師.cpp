#include <iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	while(cin >>n1 >>n2 >>n3)
	{
		int max =0;		
		if(n1 >max)
		max = n1;
		if(n2 >max)
		max = n2;
		if(n3 >max)
		max = n3;
		cout << max << endl; 
	}

	return 0;	
} 
