#include <iostream>
using namespace std;
int main()
{
	int sum,n,month,day;
	int d[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	while(n--)
	{		
		cin>>month>>day;
		sum = 0;
		if(month==1)
			sum = day;
		else 
		{
			for(int i=0;i<month-1;i++)
			{
				sum+=d[i];		
			}
			sum+=day;
		}
		if(sum%7==0)
			cout << "Friday" << endl;
		if(sum%7==1)
			cout << "Saturday" << endl;
		if(sum%7==2)
			cout << "Sunday" << endl;
		if(sum%7==3)
			cout << "Monday" << endl; 
		if(sum%7==4)
			cout << "Tuesday" << endl;
		if(sum%7==5)
			cout << "Wednesday" << endl;
		if(sum%7==6)
			cout << "Thursday" << endl;
		
	}
	return 0;
}
