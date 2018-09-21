#include <iostream>
#include <cmath>
using namespace std;
class point
{
	public:
		int x,y;
		int area(point &p1,point &p2)
		{
			int area = 0;
			area = (abs((x*p1.y+p1.x*p2.y+y*p2.x)-(y*p1.x+p1.y*p2.x+x*p2.y)));
			return area;
		}
};
int main()
{
    int num;
    point p[200];
    while(cin>>num)
    {


		for(int i=0;i<num;i++)
			cin >> p[i].x >> p[i].y;

    	int max_area =0;

    	for(int i=0;i<num-2;i++)
		{
			for(int j=i+1;j<num-1;j++)
				{
					for(int k=j+1;k<num;k++)
						if(p[i].area(p[j],p[k])>max_area)
							max_area = p[i].area(p[j],p[k]);
				}
		}
		cout.precision(2);
		cout << fixed << max_area/2.0 << endl;

    }
}
