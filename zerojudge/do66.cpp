#include <iostream>
using namespace std;
int main()
{
	int hour,minute;
	while(cin >>hour >>minute)
	{
		if(hour>=8 && hour <=16 && minute>=0 && minute<60)	
			cout << "At School" << endl;
		else if(hour==7 && minute>=30 && minute<60)
			cout << "At School" << endl;
		else 
			cout << "Off School" << endl;
	}
	return 0;
} 
