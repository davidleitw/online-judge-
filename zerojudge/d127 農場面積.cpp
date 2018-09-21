#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long int l;
	while(cin >>l)
	{
		long int helf = l/2;
		long int s1,s2,max =0,area =0;
		for(int i=1;i<helf;i++)
		{
			s1 = i;
			s2 = helf-i;
			area = s1*s2;
			if(area >max)
			max = area;
		}
		cout << max << endl;
	}
	return 0;
}
