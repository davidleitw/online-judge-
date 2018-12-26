#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool arr2[3000];
int main()
{
	int num;
	while(cin>>num)
	{
		vector<int> arr1;
		for(int i=0;i<num;i++){
			int input;
			cin>>input;
			arr1.push_back(input);
		}
		for(int i=1;i<=num;i++) arr2[i] = true;

		for(int i=0;i<num-1;i++)
		{
			int n = abs(arr1[i+1] - arr1[i]);
			cout << "n = " << n << endl;
			arr2[abs(n)] = false;
		}
		bool ans = true;
		for(int i=1;i<=num-1;i++){
			if(arr2[i]==true) ans = false;
		}
		if(ans) cout << "Jolly" << endl;
		else    cout << "Not jolly" << endl;

	}
}
