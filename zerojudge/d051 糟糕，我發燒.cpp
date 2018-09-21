#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double f;
	while(cin >>f)
	{
		double i;
		i = (f-32)*5/9;
		cout << fixed << setprecision(3) << setfill('0') << i << endl;
	}

	return 0;
}
