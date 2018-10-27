#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{

	int hour,minute;
	char dot;
	while(cin >> hour >> dot >> minute)
	{
		if(hour==0 && minute==0)
			break;
		//cout << setiosflags(ios::fixed) << setprecision(3);
		cout << fixed << setprecision(3);
		double angle = abs((double)hour*30 - (double)minute*5.5);
		if(angle>180)
				angle = 360-angle;

		cout << angle << endl;
	}
}
