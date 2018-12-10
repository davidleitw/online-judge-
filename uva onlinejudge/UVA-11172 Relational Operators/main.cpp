#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int line;
    while(cin>>line)
	{
		for(int i=0;i<line;i++)
		{
			long long int a,b;
			cin >> a >> b;
			if(a>b) cout << ">" << endl;
			else if(a<b) cout << "<" << endl;
			else cout << "=" << endl;
		}
	}
    return 0;
}
