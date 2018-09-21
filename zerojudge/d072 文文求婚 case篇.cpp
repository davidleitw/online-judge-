#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin >>n)
	{
		int input,i;
		for(i=0;i<n;i++)
		{
			cin >> input;
			if(input%4==0&&input%100!=0||input%400==0)
				cout << "Case " << i+1 << ": a leap year" << endl;
			else 
				cout << "Case " << i+1 << ": a normal year" << endl;
		}	
	}
	return 0;
}
