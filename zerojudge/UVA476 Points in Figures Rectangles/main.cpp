#include <iostream>
using namespace std;
struct Rectangle
{
	double left_x,left_y;
	double right_x,right_y;
};
int main()
{
	char first;
	Rectangle rectangle[11];
	int c =0;
	for(int i=0;i<11;i++)
	{
		cin >> first;

		if(first=='*')
			break;
		if(first=='r')
		{
			cin >> rectangle[i].left_x >> rectangle[i].left_y;
			cin >> rectangle[i].right_x >> rectangle[i].right_y;
			c++;//to count how many rectangle are we got
		}
	}
	double x,y;
	int time = 1;   //let us know point number
	while(cin>>x>>y)//input our test point x,y
	{
		bool ans = 0;
		if(x==9999.9 && y==9999.9)
			break;
		for(int i=0;i<c;i++)//scan every rectangle
		{
			if(x>rectangle[i].left_x && x<rectangle[i].right_x && y>rectangle[i].right_y && y<rectangle[i].left_y)
			{
				cout << "Point " << time << " is contained in figure " << i+1 << endl;
				ans = 1;
			}
		}
		if(!ans)
				cout << "Point " << time << " is not contained in any figure" << endl;
		time++;
	}
	return 0;
}
