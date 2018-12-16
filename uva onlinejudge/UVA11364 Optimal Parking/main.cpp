#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int line;
    while(cin>>line)
	{
		for(int i=0;i<line;i++)
		{
			vector<int> Parking;
			int num;
			cin>>num;
			for(int j=0;j<num;j++){
				int input;
				cin>>input;
				Parking.push_back(input);
			}
			sort(Parking.begin(),Parking.end());
			cout << ((Parking[Parking.size()-1])-Parking[0])*2 << endl;
		}
	}
    return 0;
}
