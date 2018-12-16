#include <iostream>

using namespace std;
string word[6] = {"HELLO","HOLA","HALLO","BONJOUR","CIAO","ZDRAVSTVUJTE"};
string country[6] = {"ENGLISH","SPANISH","GERMAN","FRENCH","ITALIAN","RUSSIAN"};
int main()
{
    string input;
    int Case = 0;
    while(cin>>input,input!="#")
	{
		bool exist = 0;
		for(int i=0;i<6;i++)
		{
			if(input==word[i]){
				cout << "Case " << ++Case << ": " << country[i] << endl;
				exist = 1;
				break;
			}
		}
		if(!exist) cout << "Case " << ++Case << ": " << "UNKNOWN" << endl;
	}
    return 0;
}
