#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	int input;
	
	while(cin >> input){
	int base = 2;	
	int count= 0;
	int    i = 2;
	while(input >=i){
			if(input %i == 0){
				input /=i;
				count +=1;
				base  = i;
			}
			else{//結算並且讓base,i做到下一階段 
				if(count >1) 
				cout << base << "^" << count << " * ";
				if(count ==1)
				cout << base << " * ";
				count =0;
				i  +=  1;
			}			
		}
	if(count > 1)
	cout << base << "^" << count << endl;	
	if(count ==1) 
	cout << base << endl;
	if(i ==input)
	cout << i << endl;
	}
	return 0;
}
