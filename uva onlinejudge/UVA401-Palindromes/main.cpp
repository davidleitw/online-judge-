#include <iostream>
using namespace std;
string output[4] = {"is not a palindrome.","is a regular palindrome.","is a mirrored string.","is a mirrored palindrome."};//use space turn to time
string rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char ch(char in)
{
	if(isalpha(in))
		return rev[in-'A'];
	else
		return rev[in-'0'+25];
}
int main()
{

	string input;
	while(cin>>input)
	{
		int p = 1,q = 1;
		for(int i=0;i<(input.length()+1)/2;i++)
		{
			if(input[i]!=input[input.length()-1-i]) p = 0;    //regular
			if(ch(input[i])!=input[input.length()-1-i]) q = 0;//mirror
		}
		//cout << p << " " << q << endl;
		cout << input << " -- " << output[p+2*q] << endl << endl;
	}
}
