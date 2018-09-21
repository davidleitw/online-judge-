#include <iostream>
using namespace std;
int main(){	
	
	int u,d;
	string a="e125467346";
	cout << a[1] << endl;
	while(cin >> u >> d){
		int a[u][d];	
		for(int i=0;i<u;i++)
			for(int j=0;j<d;j++)
				cin >> a[i][j];

		for(int i=0;i<d;i++){
			for(int j=0;j<u;j++)
				cout << a[j][i] << " ";
				cout << endl;
		}
	}
	return 0;	
}
