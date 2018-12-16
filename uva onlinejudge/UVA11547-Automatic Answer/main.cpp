#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			int input;
			int j;
			cin>>input;
			input = input*315 + 36962;
			j = (input/10)%10;
			if(input>0) cout << j << endl;
			else 	    cout <<-j << endl;
		}
	}
    return 0;
}
