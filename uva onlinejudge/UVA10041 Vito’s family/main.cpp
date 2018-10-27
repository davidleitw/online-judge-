#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int line;
	while(cin >>line)
	{
		int num;
		int temp;
		for(int i=0;i<line;i++)
		{
			cin >>num;

			vector<int> input;
			for(int j=0;j<num;j++)
			{
				cin >>temp;
				input.push_back(temp);
			}

			sort(input.begin(),input.end());

			int mid = input[num/2];
			int sum = 0;

			for(int i=0;i<num;i++)
				sum+=abs(input[i]-mid);

			cout << sum << endl;
		}
	}
	return 0;
}
