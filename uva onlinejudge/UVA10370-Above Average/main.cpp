#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
	int Case;
	while(cin>>Case)
	{
		for(int k=0;k<Case;k++)
		{
			int num;  cin>>num;
			vector<int> average;
			double sum = 0;
			double cou = 0;
			for(int i=0;i<num;i++)
			{
				int input;
				cin>>input;
				sum = sum+input;
				average.push_back(input);
			}
			sum /= num;//Get average
			for(int i=0;i<num;i++)
			{
				if(average[i]>sum) cou++;
			}
			cout << fixed << setprecision(3) << (cou/num) * 100 << "%" << endl;
		}
	}
    return 0;
}
