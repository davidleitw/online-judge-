#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int table[100001] = {0};
	//make the table
	memset(table,0,sizeof(table));
	for(int i=1;i<=100000;i++)
	{
		int x = i,y = i;
		while(x>0) { y+=x%10; x/=10; }
		if(table[y]==0 || i<table[y]) table[y] = i;//we need the min generator can let us count to y;
	}

	int line;
	while(cin>>line)
	{
		for(int i=0;i<line;i++)
		{
			int input;
			cin >>input;
			cout << table[input] << endl;
		}
	}
	return 0;
}
