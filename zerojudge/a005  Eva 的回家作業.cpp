#include <iostream>
using namespace std;
int main()
{
	int a1,a2,a3,a4,a5,i,t;	
	cin >> t;
	for(i=0;i<t;i++)
	{
		cin >> a1 >> a2 >> a3 >> a4;	
		if(a2/a1 == a3/a2)
		{		
			a5 = a4*(a2/a1);
			cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << endl;
		}
		else if(a2-a1 == a3-a2)
		{
			a5 = a4+(a2-a1);
			cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << endl;
		}	
	}
	
	return 0;	
}





