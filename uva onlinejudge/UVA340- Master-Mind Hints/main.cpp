#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
	int input;
	int turn = 1;
	vector<int> Answer;
    while(cin>>num,num!=0)
	{
		cout << "Game " << turn++ << ":" << endl;
		Answer.clear();
		for(int i=0;i<num;i++)
		{
			cin>>input;
			Answer.push_back(input);
		}
		while(true)
		{
			int A = 0,B = 0,c1 = 0,c2 = 0;
			vector<int> test;
			test.clear();
			for(int i=0;i<num;i++)
			{
				cin>>input;
				test.push_back(input);
				if(Answer[i]==test[i]) A++;
			}
			if(test[0]==0) break;//range->1~9 0 is out of the range.
			for(int i=1;i<=9;i++)
			{
				c1 = 0,c2 = 0;
				for(int k=0;k<num;k++)
				{
					if(Answer[k]==i) c1++;
					if(test[k]==i)   c2++;
				}
				if(c1<c2) B+=c1; else B+=c2;
			}
			cout << "    (" << A << "," << B-A << ")" << endl;
		}
	}
    return 0;
}
