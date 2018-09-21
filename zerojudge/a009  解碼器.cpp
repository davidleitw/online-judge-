#include <iostream>
#include <string>
using namespace std;
int main()
{
	string ans ;
	while(cin >> ans)
	{
		for(int i =0 ;i <ans.length() ;i++)
		{
			ans[i] = ans[i]-7;
			cout << ans[i];
		}
		cout << endl;
	}
	return 0;
}
