#include <iostream>
using namespace std;
int main()
{
	string s1,s2;
	while(getline(cin,s1))
	{
		getline(cin,s2);	
		int a[26]={0};
		int b[26]={0};
		char c;
		for(int i=0;i<s1.length();i++)
		{
			for(int j=0;j<26;j++)
			{
				c = j+97;
				if(s1[i]==c)
				{
					a[j]+=1;	
				}
			}
		}
		for(int i=0;i<s2.length();i++)
		{
			for(int j=0;j<26;j++)
			{
				c = j+97;
				if(s2[i]==c)
				{
					b[j]+=1;	
				}
			}
		}
		for(int i=0;i<26;i++)
		{
			if(a[i]>0 && b[i]>0)	
			{
				c=i+97;
				cout << c;	
			}
		}
		cout << endl;
	}
	return 0;
}
