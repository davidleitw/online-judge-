#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int N;
    while(cin>>N)
	{
		vector<int> space;
		cin.get();
		if(N==0) break;
		for(int i=0;i<N;i++)
		{
			int count = 0;
			string  input;
			getline(cin,input);
			for(int j=0;j<input.length();j++) if(input[j]==' ') count++;
			space.push_back(count);
		}
		sort(space.begin(),space.end());
		int ans = 0;
		for(int i=0;i<space.size();i++) ans = ans + abs(space[0]-space[i]);
		cout << ans << endl;
    }
    return 0;
}
