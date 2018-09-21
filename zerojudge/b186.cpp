#include <iostream>
using namespace std;
int main()
{
	int a,b,c;	
	while(cin >>a >>b >>c)
	{
		cout << a << " 個餅乾，";	
		int count1,count2;
		count1 =a/10;
		count2 = c/2;
		if(count1 >=count2)
		cout << count2+b << " 盒巧克力，";
		else
		cout << count1+b << " 盒巧克力，";
		cout << c << " 個蛋糕。" << endl;
	}
}
