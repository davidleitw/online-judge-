#include <iostream>
#include <cmath>
using namespace std;
int how_many(int);
int main()
{
	int n,m;
	while(cin >>n >> m)
	{
		int i;
		for(i=n;i<=m;i++)
		{
			int number_of_dight;	
			number_of_dight = how_many(i);
			int arr;
			int sum = i;
			int sum2 = 0;	
			arr = pow(i%10,number_of_dight);
			for(int j=2;j<=number_of_dight;j++)
			{	 	
				int try_demo = i;
				int set;
				int j2 = j;
				int first = pow(10,j2);
				int second = pow(10,j2-1); 
				set =pow(try_demo%first-try_demo%second,number_of_dight);
				try_demo/=10;
				sum2 = sum2+set;
			}
			sum2 = sum2+arr;
			if(sum == sum2)
			{
				cout << sum << " ";
			}
		}	
	}
	return 0;
}
int how_many(int i)
{
	int j = 0;
	while(i !=0)
	{
		i/=10;
		j  ++;	
	}
	return j;
}
