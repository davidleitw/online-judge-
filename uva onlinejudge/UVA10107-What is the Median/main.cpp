#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> Median;
    int input;
    while(cin>>input)
	{
		Median.push_back(input);
		sort(Median.begin(),Median.end());
		if(Median.size()%2==0)
			cout << (Median[Median.size()/2]+Median[(Median.size()/2)-1])/2 << endl;
		else if(Median.size()==1) cout << Median[0] << endl;
		else cout << Median[Median.size()/2] << endl;
	}
    return 0;
}
