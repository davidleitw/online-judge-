#include <iostream>
using namespace std;
int main()
{
	int a,b,c;	
	while(cin >>a >>b >>c)
	{
		cout << a << " �ӻ氮�A";	
		int count1,count2;
		count1 =a/10;
		count2 = c/2;
		if(count1 >=count2)
		cout << count2+b << " �����J�O�A";
		else
		cout << count1+b << " �����J�O�A";
		cout << c << " �ӳJ�|�C" << endl;
	}
}
