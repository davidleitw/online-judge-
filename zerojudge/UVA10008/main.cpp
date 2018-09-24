#include <iostream>
using namespace std;

int main()
{
    int line;
    string input;

    int coun[128]={0};

    while(cin>>line)
    {
		cin.get();
		for(int i=0;i<line;i++)
		{
			getline(cin,input);

			for(int j=0;j<input.length();j++)
			{
				if(input[j]>='a' && input[j]<='z')//change every letter to capital
					input[j]-=32;

				//cout << input[j] << ":" << c << endl;
				coun[(int)(input[j])]++;
			}

		}
		int maxnum = 0;

		for(int i=65;i<=90;i++) // find the number which is max
		{
			if(coun[i]>maxnum)
				maxnum = coun[i];
		}

		/*cout << "max = " << maxnum << endl;
		for(int i=0;i<26;i++)
			cout << coun[i] << " ";
		cout << endl;*/

		while(maxnum>0)
		{
			for(int i=65;i<=90;i++)
			{
				if(maxnum==coun[i])
					cout << (char)(i) << " " << coun[i] << endl;
			}
			maxnum -= 1;
		}

    }
	return 0;
}
