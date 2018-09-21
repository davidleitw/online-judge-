#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin >>n)
	{
		int a[n];
		int count[3];
		for(int i=0;i<n;i++)
			cin >> a[i];
		
		for(int j=0;j<3;j++)
			count[j] = 0;	
		
		for(int i=0;i<n;i++)
		{
			if(a[i]%3 ==0)
			count[0] +=1;
			if(a[i]%3 ==1)
			count[1] +=1;
			if(a[i]%3 ==2)
			count[2] +=1;
		}
		cout << count[0] << " " << count[1] << " " << count[2] << endl;
	}
	return 0;
}
