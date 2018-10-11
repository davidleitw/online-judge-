#include <iostream>
using namespace std;
int main()
{
	int data[50];
	int c = 1;
	int num;
	while(cin >> num)
	{
		if(num==0)
			break;

		int average = 0;
		int ans = 0;
		for(int i=0;i<num;i++)
		{
			cin >> data[i];
			average += data[i];
		}

		average/=num;//get the average

		for(int i=0;i<num;i++)
		{
			if(data[i]>average)
				ans = ans+(data[i]-average);
		}
		cout << "Set #" << c << endl;
		cout << "The minimum number of moves is " << ans << "." << endl;
		cout << endl;
		c++;
	}
	return 0;
}
