#include <iostream>
using namespace std;
int main()
{
    int pointnum;
    while(cin>>pointnum,pointnum!=0)
	{
		int x,y;
		cin >>x >>y;//division point
		for(int i=0;i<pointnum;i++)
		{
			int newx,newy;
			cin>>newx>>newy;
			if(newx==x || newy==y){ cout << "divisa" << endl; }
			else if(newx>x && newy>y){ cout << "NE" << endl; }
			else if(newx<x && newy>y){ cout << "NO" << endl; }
			else if(newx>x && newy<y){ cout << "SE" << endl; }
			else { cout << "SO" << endl; }
		}
    }
    return 0;
}
