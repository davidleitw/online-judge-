#include <iostream>
using namespace std;
int main()
{
	string input;//目前問題 測試AC 實作WA
	
	 
	string ascii = "ABCDEFGHJKLMNPQRSTUVXYWZIO";
	//cout << ascii.length() << endl;
	while(cin >> input){
		int total = 0;//建立初始值 
		
		for(int i=0;i<ascii.length()-1;i++)
			if(input[0]==ascii[i])
				total += (i+10)/10 + (i+10)%10*9;	
		
		for(int i=1;i<input.length()-1;i++)
				total += (input[i]-48)*(9-i);	
		
		total +=input[input.length()-1]-48;	
		//cout << total << endl;
		
		if(total%10==0)
			cout << "real" << endl;
		else
			cout << "fake" << endl;
	}
	return 0;
}
