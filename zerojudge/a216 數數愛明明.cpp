#include <iostream>
using namespace std;
int f(int n);
long long g(int n);
int main()
{
	int n;
	while(cin >>n)
	{
		cout << f(n) << " " << g(n) << endl;	
	}
	return 0;
}
int f(int n)
{
	if(n ==1)
	return 1;
	return n+f(n-1);
}
long long g(int n)
{
	if(n ==1)
	return 1;
	return f(n)+g(n-1);
}
