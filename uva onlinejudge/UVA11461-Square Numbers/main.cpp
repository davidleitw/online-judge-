#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int input[316],a,b,count;
	while(cin>>a>>b)
	{
		if(a==0&&b==0)
			break;
		for(int i=0;i<316;i++)
		{
			input[i] = pow(i+1,2);
		}
		count=0;
		for(int i=a;i<=b;i++)
		{
			for(int j=0;j<316;j++)
			{
				if(i==input[j])
				{
					count++;
					break;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
