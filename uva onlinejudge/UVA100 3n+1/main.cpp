#include <iostream>
using namespace std;
int main()
{
	int i,j;
	while(cin>>i>>j)
	{
		cout << i << " " << j << " ";
		if(i>j) swap(i,j);

		int max_num = 0;
		for(int k1=i;k1<=j;k1++)
		{
			int c = 1;
			int k = k1;
			while(k!=1)
			{
				if(k%2==0)
					k/=2;
				else
					k = (3*k)+1;

				c+=1;
			}
			if(c>max_num)
				max_num = c;
		}
		cout << max_num << endl;
	}
}
