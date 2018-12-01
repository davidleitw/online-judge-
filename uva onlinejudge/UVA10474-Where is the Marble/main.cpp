#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int N,Q;
	int Case = 0;
	while(cin>>N>>Q)
	{
		if(N==0&&Q==0) break;
		vector<int> marble;
		vector<int> question;
		marble.clear(),question.clear();
		int num;
		for(int i=0;i<N;i++){
			cin>>num;
			marble.push_back(num);
		}
		sort(marble.begin(),marble.end());
		for(int i=0;i<Q;i++){
			cin>>num;
			question.push_back(num);
		}
		printf("CASE# %d:\n",++Case);
		for(int i=0;i<question.size();i++)
		{
			bool exist = false;
			for(int j=0;j<marble.size();j++)
			{
				if(question[i]==marble[j]){
					exist = true;
					printf("%d found at %d\n",question[i],j+1);
					break;
				}
			}
			if(!exist) printf("%d not found\n",question[i]);
		}
	}
	return 0;
}
