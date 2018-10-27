#include <iostream>
using namespace std;
int main()
{
	string s2;
	while(getline(cin,s2))
	{
		for(int i=0;i<s2.length();i++)
			cout << (char)(s2[i]-7);
		cout << endl;
	}

	return 0;
}
