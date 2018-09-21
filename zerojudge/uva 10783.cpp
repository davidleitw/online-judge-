#include <iostream>
using namespace std;
int main()
{
	int time,a,b,sum,t;
	cin>>time;
	t=1;
	while(time--)
	{
		sum=0;
		cin>>a>>b;
		for(int i=a;i<=b;i++)
		{
			if(i%2!=0)	
				sum+=i;
		}
		cout << "Case " << t << ": " << sum << endl;
		t+=1;
	}
	return 0;
}
