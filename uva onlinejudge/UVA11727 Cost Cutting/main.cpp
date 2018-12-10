#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int line;
    while(cin>>line)
	{
		int turn = 0;
		for(int i=0;i<line;i++)
		{
			int a[3];
			for(int j=0;j<3;j++){
				cin>>a[j];
			}
			sort(a,a+3);
			cout << "Case " << ++turn << ": " << a[1] << endl;
		}
	}
    return 0;
}
