#include <iostream>
using namespace std;
int main()
{
	int a;
	while(cin >>a)
	{
		if(a>=0 && a<=5)
		cout << 0 << endl;
		if(a>=6 && a<=11)
		cout << 590 << endl;
		if(a>=12 && a<=17)
		cout << 790 << endl;
		if(a>=18 && a<=59)
		cout << 890 << endl;
		if(a >=60)
		cout << 399 << endl;	
	}
	
	return 0;
}
