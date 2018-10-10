#include <iostream>
#include <cmath>
using namespace std;
struct Rectangle
{
	double left_x,left_y;
	double right_x,right_y;
};
struct Circle
{
	double center_x,center_y;
	double radius;
	bool judgment_in_figure(double x,double y)
	{
		double cmp = sqrt(pow((center_x-x),2)+pow((center_y-y),2));
		if(cmp<radius)
			return true;
		else
			return false;
	}
};

int main()
{
    char first_ch;
    int t1 = 0;
    int t2 = 1;
    Rectangle rectangle[10];
    Circle circle[10];
    for(int i=0;i<10;i++)
	{
		rectangle[i].left_x = rectangle[i].left_y = rectangle[i].right_x = rectangle[i].right_y = 0;
		circle[i].radius = 0;
	}


    while(cin>>first_ch)
	{
		if(first_ch == '*')
			break;
		if(first_ch == 'r')
		{
			cin >> rectangle[t1].left_x >> rectangle[t1].left_y;
			cin >> rectangle[t1].right_x >> rectangle[t1].right_y;
		}
		if(first_ch == 'c')
		{
			cin >> circle[t1].center_x >> circle[t1].center_y;
			cin >> circle[t1].radius;
		}
		t1++;
	}

	while(true)
	{
		double x,y;
		bool ans = false;
		cin >> x >> y;

		if(x==9999.9 && y==9999.9)
			break;

		for(int i=0;i<t1;i++)//do figure's time
		{
			if(x>rectangle[i].left_x && x<rectangle[i].right_x && y>rectangle[i].right_y && y<rectangle[i].left_y)
			{
				cout << "Point " << t2 << " is contained in figure " << i+1 << endl;
				ans = true;
			}

			if(circle[i].judgment_in_figure(x,y))
			{
				cout << "Point " << t2 << " is contained in figure " << i+1 << endl;
				ans = true;
			}
		}
		if(!ans)
			cout << "Point " << t2 << " is not contained in any figure" << endl;
		t2++;
	}

}
