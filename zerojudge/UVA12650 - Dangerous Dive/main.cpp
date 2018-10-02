#include <iostream>
using namespace std;
int main()
{
	int n,r,input;
	int data[10001]={};//[]->0~10000,we want 1~10000
	while(cin>>n>>r)
	{

		for(int i=1;i<=n;i++)
			data[i] = 1;//1~n volunteers go to the mission


		for(int i=0;i<r;i++)
		{
			cin>>input;
			data[input] = 0;
		}

		if(n==r)//all of volunteers are come back
		{
			cout << "*" << endl;
			continue;
		}

		for(int i=1;i<=n;i++)
		{
			if(data[i]==1)
				cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
