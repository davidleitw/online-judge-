#include <iostream>
using namespace std;
int main()
{
	int a,b,n;
	while(cin >> a >> b >> n)
	{
		int input_1 = a/b;
		int input_2 =a;		
		cout << input_1 << ".";
		for(int i=0;i<n;i++)
		{		
			input_2 = input_2%b*10;
			cout << input_2/b;			
		}
		cout << endl;
		
	}
	return 0;
}
