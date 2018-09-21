#include <iostream>
#include <cmath>
using namespace std;
bool test(int);
int main()
{
	long int m,n;	
	while(cin >>m >>n)
	{
		int i;
		int count = 0;
		for(i=m;i<=n;i++)
		{
			/*if(i==1)//原本沒有這行,在m=1的時候會出錯 他會判斷是質數 
			count -=1;*/
			if(test(i)==true)		
			count +=1;
		}	
		cout << count << endl;
	}
	return 0;
}
bool test(int x)
{
	int sqrt_x = sqrt(x);
	if(x==1)//1不是質數 
	return false;
	for(int i=2;i<=sqrt_x;i++)
	{
		if(x%i ==0)
			return false;
	}
	return true;
}
