#include <iostream>
#include <cmath>
using namespace std;
int count(int);
int main()
{
	int n,m;
	
	while(cin >>n >>m)	
	{
	    int t=0;
		for(int i=n;i<=m;i++)			
		{	
			int arr[count(i)];
			int count_2 = 0;
			int i2 = i;
			int sum = 0;
			
			while(i2!=0)
			{
				arr[count_2] = i2%10;
				i2/=10;
				count_2++;
			}
			
			for(int z=0;z<count(i);z++)
			{
				sum = sum +pow(arr[z],count(i));
			}
			
			if(sum == i)
			{
				cout << i << " ";
				t++;
			}
		}
		if(t==0)
			cout << "none" << endl;
		cout << endl;	
	}

	return 0;
}
int count(int x)
{
	int count=0;
	int try_x = x;
	while(try_x !=0)
	{
		try_x/=10;
		count++;
	}
	return count;
}
