#include <iostream>

using namespace std;

int main()
{
    int n,m;
    const int _size = 3;
    while(cin>>n>>m)
	{
		cout << (n/_size)*(m/_size) << endl;
	}
    return 0;
}
