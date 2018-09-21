#include <iostream>
using namespace std;
int main()
{
	char c;
	int k=1;
	while(cin.get(c))
	{
		if(c!='"')
			cout << c;		
		else if(k%2!=0)
		{
			cout << "``"; 
			
			k+=1;
		}
		else
		{
			cout << "''"; 
			k+=1;
		}
	}
	return 0;
}
